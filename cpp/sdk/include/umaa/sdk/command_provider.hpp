/*
 * (c) Copyright, Real-Time Innovations, 2025.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 */

#ifndef UMAA_SDK_COMMAND_PROVIDER_HPP
#define UMAA_SDK_COMMAND_PROVIDER_HPP

#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <string>

#include <rti/rti.hpp>
#include <rti/core/cond/AsyncWaitSet.hpp>

#include "umaa/sdk/base_service.hpp"
#include "umaa/sdk/command_provider_session.hpp"
#include "umaa/sdk/dds_context.hpp"
#include "umaa/sdk/guid_util.hpp"

namespace umaa { namespace sdk {

/// Policy for handling a new command while one is already active
enum class IncomingCommandBehavior {
    CANCEL_EXISTING,    ///< Cancel active command, start new (default)
    REJECT_INCOMING,    ///< Fail the new command immediately
    ACCEPT_CONCURRENT   ///< Allow multiple active sessions
};

/// Command service provider (provider side of a UMAA command service).
/// Receives commands, manages sessions with ICD-correct state machines,
/// and publishes ack/status responses.
///
/// Subclass and override on_command() to implement command logic.
///
/// Template params: Cmd=CommandType, Ack=AckReportType, Sts=StatusType
template<typename Cmd, typename Ack, typename Sts>
class CommandProvider : public BaseService {
public:
    using Session = CommandProviderSession<Cmd, Ack, Sts>;

    CommandProvider(
            DDSContext& ctx,
            const std::string& cmd_topic,
            const std::string& ack_topic,
            const std::string& sts_topic,
            const std::string& service_name = "",
            IncomingCommandBehavior behavior = IncomingCommandBehavior::CANCEL_EXISTING)
        : BaseService(ctx, service_name.empty() ? ("CommandProvider:" + cmd_topic) : service_name),
          behavior_(behavior),
          cmd_reader_(ctx.create_reader<Cmd>(cmd_topic)),
          ack_writer_(ctx.create_writer<Ack>(ack_topic)),
          sts_writer_(ctx.create_writer<Sts>(sts_topic)),
          condition_(dds::core::null)
    {
        // Attach command reader to the shared AsyncWaitSet
        condition_ = dds::core::cond::StatusCondition(cmd_reader_);
        condition_.enabled_statuses(dds::core::status::StatusMask::data_available());

        condition_->handler([this](dds::core::cond::Condition) {
            auto samples = cmd_reader_.take();
            ctx_.async_waitset().unlock_condition(condition_);

            for (const auto& sample : samples) {
                if (sample.info().valid()) {
                    handle_incoming_command(sample.data());
                }
            }
        });

        ctx.async_waitset().attach_condition(condition_);
    }

    /// Override to handle an incoming command. Called from AsyncWaitSet thread.
    /// The session is already created and ack has been sent.
    virtual void on_command(Session& session, const Cmd& cmd) = 0;

    /// Override for notification when a session reaches a terminal state.
    virtual void on_terminal(Session& session) {}

    void close() override {
        // Detach condition
        if (condition_ != dds::core::null) {
            try {
                ctx_.async_waitset().detach_condition(condition_);
            } catch (...) {}
            condition_ = dds::core::null;
        }
        // Destroy active sessions (triggers dispose in destructors)
        active_sessions_.clear();
    }

    // ── Accessors ──────────────────────────────────────────────────────────

    void set_behavior(IncomingCommandBehavior b) { behavior_ = b; }
    IncomingCommandBehavior behavior() const { return behavior_; }

    dds::pub::DataWriter<Ack>& ack_writer() { return ack_writer_; }
    dds::pub::DataWriter<Sts>& status_writer() { return sts_writer_; }

    /// Get active session by session ID (returns nullptr if not found)
    Session* find_session(const NumericGuid& session_id) {
        auto it = active_sessions_.find(session_id);
        return (it != active_sessions_.end()) ? it->second.get() : nullptr;
    }

    size_t active_session_count() const { return active_sessions_.size(); }

private:
    IncomingCommandBehavior behavior_;
    dds::sub::DataReader<Cmd> cmd_reader_;
    dds::pub::DataWriter<Ack> ack_writer_;
    dds::pub::DataWriter<Sts> sts_writer_;
    dds::core::cond::StatusCondition condition_;

    std::map<NumericGuid, std::unique_ptr<Session>> active_sessions_;

    void handle_incoming_command(const Cmd& cmd) {
        NumericGuid session_id = cmd.sessionID();

        // Check if this is an update to an existing session
        auto it = active_sessions_.find(session_id);
        if (it != active_sessions_.end()) {
            auto& session = *it->second;
            if (!session.is_final()) {
                session.update(cmd);
                session.send_status("Command updated");
                on_command(session, cmd);
            }
            return;
        }

        // New command — apply incoming command behavior
        if (!active_sessions_.empty()) {
            switch (behavior_) {
            case IncomingCommandBehavior::CANCEL_EXISTING:
                // Cancel all active sessions
                for (auto& pair : active_sessions_) {
                    if (!pair.second->is_final()) {
                        pair.second->cancel();
                        pair.second->send_status("Canceled by new command");
                        on_terminal(*pair.second);
                    }
                }
                active_sessions_.clear();
                break;

            case IncomingCommandBehavior::REJECT_INCOMING:
                // Reject the new command — create a transient session, fail it, let it dispose
                {
                    auto rejected = std::make_unique<Session>(
                        ctx_.source_id(), cmd, ack_writer_, sts_writer_);
                    rejected->send_ack();
                    rejected->fail(CommandStatusReasonEnumType::RESOURCE_FAILED);
                    rejected->send_status("Rejected: active command in progress");
                    on_terminal(*rejected);
                }
                return;

            case IncomingCommandBehavior::ACCEPT_CONCURRENT:
                // Allow — fall through to create session
                break;
            }
        }

        // Create new session
        auto session = std::make_unique<Session>(
            ctx_.source_id(), cmd, ack_writer_, sts_writer_);

        // Send ack immediately
        session->send_ack();

        // Advance to COMMANDED and notify status
        session->advance_state();
        session->send_status();

        Session& session_ref = *session;
        active_sessions_.emplace(session_id, std::move(session));

        // Invoke user logic
        on_command(session_ref, cmd);

        // Clean up final sessions
        cleanup_final_sessions();
    }

    void cleanup_final_sessions() {
        for (auto it = active_sessions_.begin(); it != active_sessions_.end(); ) {
            if (it->second->is_final()) {
                it = active_sessions_.erase(it);
            } else {
                ++it;
            }
        }
    }
};

/// Command provider variant that includes an execution status topic
template<typename Cmd, typename Ack, typename Sts, typename Exec>
class CommandProviderWithExec : public BaseService {
public:
    using Session = CommandProviderSessionWithExec<Cmd, Ack, Sts, Exec>;

    CommandProviderWithExec(
            DDSContext& ctx,
            const std::string& cmd_topic,
            const std::string& ack_topic,
            const std::string& sts_topic,
            const std::string& exec_topic,
            const std::string& service_name = "",
            IncomingCommandBehavior behavior = IncomingCommandBehavior::CANCEL_EXISTING)
        : BaseService(ctx, service_name.empty() ? ("CommandProvider:" + cmd_topic) : service_name),
          behavior_(behavior),
          cmd_reader_(ctx.create_reader<Cmd>(cmd_topic)),
          ack_writer_(ctx.create_writer<Ack>(ack_topic)),
          sts_writer_(ctx.create_writer<Sts>(sts_topic)),
          exec_writer_(ctx.create_writer<Exec>(exec_topic)),
          condition_(dds::core::null)
    {
        condition_ = dds::core::cond::StatusCondition(cmd_reader_);
        condition_.enabled_statuses(dds::core::status::StatusMask::data_available());

        condition_->handler([this](dds::core::cond::Condition) {
            auto samples = cmd_reader_.take();
            ctx_.async_waitset().unlock_condition(condition_);

            for (const auto& sample : samples) {
                if (sample.info().valid()) {
                    handle_incoming_command(sample.data());
                }
            }
        });

        ctx.async_waitset().attach_condition(condition_);
    }

    virtual void on_command(Session& session, const Cmd& cmd) = 0;
    virtual void on_terminal(Session& session) {}

    void close() override {
        if (condition_ != dds::core::null) {
            try {
                ctx_.async_waitset().detach_condition(condition_);
            } catch (...) {}
            condition_ = dds::core::null;
        }
        active_sessions_.clear();
    }

    void set_behavior(IncomingCommandBehavior b) { behavior_ = b; }
    IncomingCommandBehavior behavior() const { return behavior_; }

    dds::pub::DataWriter<Ack>& ack_writer() { return ack_writer_; }
    dds::pub::DataWriter<Sts>& status_writer() { return sts_writer_; }
    dds::pub::DataWriter<Exec>& exec_writer() { return exec_writer_; }

    Session* find_session(const NumericGuid& session_id) {
        auto it = active_sessions_.find(session_id);
        return (it != active_sessions_.end()) ? it->second.get() : nullptr;
    }

    size_t active_session_count() const { return active_sessions_.size(); }

private:
    IncomingCommandBehavior behavior_;
    dds::sub::DataReader<Cmd> cmd_reader_;
    dds::pub::DataWriter<Ack> ack_writer_;
    dds::pub::DataWriter<Sts> sts_writer_;
    dds::pub::DataWriter<Exec> exec_writer_;
    dds::core::cond::StatusCondition condition_;

    std::map<NumericGuid, std::unique_ptr<Session>> active_sessions_;

    void handle_incoming_command(const Cmd& cmd) {
        NumericGuid session_id = cmd.sessionID();

        auto it = active_sessions_.find(session_id);
        if (it != active_sessions_.end()) {
            auto& session = *it->second;
            if (!session.is_final()) {
                session.update(cmd);
                session.send_status("Command updated");
                on_command(session, cmd);
            }
            return;
        }

        if (!active_sessions_.empty()) {
            switch (behavior_) {
            case IncomingCommandBehavior::CANCEL_EXISTING:
                for (auto& pair : active_sessions_) {
                    if (!pair.second->is_final()) {
                        pair.second->cancel();
                        pair.second->send_status("Canceled by new command");
                        on_terminal(*pair.second);
                    }
                }
                active_sessions_.clear();
                break;

            case IncomingCommandBehavior::REJECT_INCOMING:
                {
                    auto rejected = std::make_unique<Session>(
                        ctx_.source_id(), cmd, ack_writer_, sts_writer_, exec_writer_);
                    rejected->send_ack();
                    rejected->fail(CommandStatusReasonEnumType::RESOURCE_FAILED);
                    rejected->send_status("Rejected: active command in progress");
                    on_terminal(*rejected);
                }
                return;

            case IncomingCommandBehavior::ACCEPT_CONCURRENT:
                break;
            }
        }

        auto session = std::make_unique<Session>(
            ctx_.source_id(), cmd, ack_writer_, sts_writer_, exec_writer_);

        session->send_ack();
        session->advance_state();
        session->send_status();

        Session& session_ref = *session;
        active_sessions_.emplace(session_id, std::move(session));

        on_command(session_ref, cmd);
        cleanup_final_sessions();
    }

    void cleanup_final_sessions() {
        for (auto it = active_sessions_.begin(); it != active_sessions_.end(); ) {
            if (it->second->is_final()) {
                it = active_sessions_.erase(it);
            } else {
                ++it;
            }
        }
    }
};

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_COMMAND_PROVIDER_HPP
