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

#ifndef UMAA_SDK_COMMAND_PROVIDER_SESSION_HPP
#define UMAA_SDK_COMMAND_PROVIDER_SESSION_HPP

#include <iostream>
#include <string>

#include <rti/rti.hpp>

#include "umaa/sdk/command_state_machine.hpp"
#include "umaa/sdk/guid_util.hpp"
#include "umaa/sdk/timestamp.hpp"

namespace umaa { namespace sdk {

/// A single active command session. Manages state transitions, publishing of
/// ack/status messages, and disposes all keyed instances on destruction
/// (per UMAA §5.2.1.3 — guarantees cleanup even on exceptions).
///
/// Template parameters mirror the UMAA command service pattern:
///   Cmd  - CommandType (incoming command)
///   Ack  - CommandAckReportType
///   Sts  - CommandStatusType
///   Exec - ExecutionStatusReportType (optional, use void to omit)
template<typename Cmd, typename Ack, typename Sts, typename Exec = void>
class CommandProviderSession {
public:
    CommandProviderSession(
            const NumericGuid& source_id,
            const Cmd& command,
            dds::pub::DataWriter<Ack>& ack_writer,
            dds::pub::DataWriter<Sts>& status_writer)
        : source_id_(source_id),
          command_(command),
          ack_writer_(ack_writer),
          status_writer_(status_writer)
    {
        // Extract session ID from the incoming command
        session_id_ = command.sessionID();
    }

    // Non-copyable, non-movable
    CommandProviderSession(const CommandProviderSession&) = delete;
    CommandProviderSession& operator=(const CommandProviderSession&) = delete;

    /// Destructor disposes ack + status (PSU pattern — guarantees cleanup)
    ~CommandProviderSession() {
        try {
            dispose_ack();
            dispose_status();
        } catch (const std::exception& e) {
            std::cerr << "[CommandProviderSession] dispose failed: "
                      << e.what() << std::endl;
        }
    }

    // ── State transitions ──────────────────────────────────────────────────

    bool advance_state() { return state_machine_.advance_state(); }

    bool update(const Cmd& new_command) {
        if (!state_machine_.update()) {
            return false;
        }
        command_ = new_command;
        return true;
    }

    bool cancel() { return state_machine_.cancel(); }

    bool fail(CommandStatusReasonEnumType reason) {
        return state_machine_.fail(reason);
    }

    // ── Publishing ─────────────────────────────────────────────────────────

    void send_ack() {
        Ack ack;
        ack.source().id(source_id_);
        ack.sessionID(session_id_);
        set_timestamp(ack.timeStamp());
        ack.command(command_);
        ack_writer_.write(ack);
    }

    void send_status(const std::string& log_message = "") {
        Sts status;
        status.source().id(source_id_);
        status.sessionID(session_id_);
        status.commandStatus(state_machine_.state());
        status.commandStatusReason(state_machine_.reason());
        status.logMessage(log_message);
        set_timestamp(status.timeStamp());
        status_writer_.write(status);
    }

    // ── Accessors ──────────────────────────────────────────────────────────

    const Cmd& command() const { return command_; }
    CommandStatusEnumType state() const { return state_machine_.state(); }
    CommandStatusReasonEnumType reason() const { return state_machine_.reason(); }
    bool is_final() const { return state_machine_.is_final(); }
    const NumericGuid& session_id() const { return session_id_; }

private:
    NumericGuid source_id_;
    NumericGuid session_id_;
    CommandStateMachine state_machine_;
    Cmd command_;
    dds::pub::DataWriter<Ack>& ack_writer_;
    dds::pub::DataWriter<Sts>& status_writer_;

    void dispose_ack() {
        Ack ack;
        ack.source().id(source_id_);
        ack.sessionID(session_id_);
        set_timestamp(ack.timeStamp());
        ack_writer_.dispose_instance(ack_writer_.lookup_instance(ack));
    }

    void dispose_status() {
        Sts status;
        status.source().id(source_id_);
        status.sessionID(session_id_);
        set_timestamp(status.timeStamp());
        status_writer_.dispose_instance(status_writer_.lookup_instance(status));
    }
};

/// Specialization for services that include an execution status topic
template<typename Cmd, typename Ack, typename Sts, typename Exec>
class CommandProviderSessionWithExec {
public:
    CommandProviderSessionWithExec(
            const NumericGuid& source_id,
            const Cmd& command,
            dds::pub::DataWriter<Ack>& ack_writer,
            dds::pub::DataWriter<Sts>& status_writer,
            dds::pub::DataWriter<Exec>& exec_writer)
        : source_id_(source_id),
          command_(command),
          ack_writer_(ack_writer),
          status_writer_(status_writer),
          exec_writer_(exec_writer)
    {
        session_id_ = command.sessionID();
    }

    // Non-copyable, non-movable
    CommandProviderSessionWithExec(const CommandProviderSessionWithExec&) = delete;
    CommandProviderSessionWithExec& operator=(const CommandProviderSessionWithExec&) = delete;

    ~CommandProviderSessionWithExec() {
        try {
            dispose_ack();
            dispose_status();
            if (has_published_exec_) {
                dispose_exec();
            }
        } catch (const std::exception& e) {
            std::cerr << "[CommandProviderSessionWithExec] dispose failed: "
                      << e.what() << std::endl;
        }
    }

    // ── State transitions ──────────────────────────────────────────────────

    bool advance_state() { return state_machine_.advance_state(); }

    bool update(const Cmd& new_command) {
        if (!state_machine_.update()) {
            return false;
        }
        command_ = new_command;
        return true;
    }

    bool cancel() { return state_machine_.cancel(); }

    bool fail(CommandStatusReasonEnumType reason) {
        return state_machine_.fail(reason);
    }

    // ── Publishing ─────────────────────────────────────────────────────────

    void send_ack() {
        Ack ack;
        ack.source().id(source_id_);
        ack.sessionID(session_id_);
        set_timestamp(ack.timeStamp());
        ack.command(command_);
        ack_writer_.write(ack);
    }

    void send_status(const std::string& log_message = "") {
        Sts status;
        status.source().id(source_id_);
        status.sessionID(session_id_);
        status.commandStatus(state_machine_.state());
        status.commandStatusReason(state_machine_.reason());
        status.logMessage(log_message);
        set_timestamp(status.timeStamp());
        status_writer_.write(status);
    }

    void send_exec_status(const Exec& exec) {
        exec_writer_.write(exec);
        has_published_exec_ = true;
    }

    // ── Accessors ──────────────────────────────────────────────────────────

    const Cmd& command() const { return command_; }
    CommandStatusEnumType state() const { return state_machine_.state(); }
    CommandStatusReasonEnumType reason() const { return state_machine_.reason(); }
    bool is_final() const { return state_machine_.is_final(); }
    const NumericGuid& session_id() const { return session_id_; }

private:
    NumericGuid source_id_;
    NumericGuid session_id_;
    CommandStateMachine state_machine_;
    Cmd command_;
    dds::pub::DataWriter<Ack>& ack_writer_;
    dds::pub::DataWriter<Sts>& status_writer_;
    dds::pub::DataWriter<Exec>& exec_writer_;
    bool has_published_exec_ = false;

    void dispose_ack() {
        Ack ack;
        ack.source().id(source_id_);
        ack.sessionID(session_id_);
        set_timestamp(ack.timeStamp());
        auto handle = ack_writer_.lookup_instance(ack);
        if (handle != dds::core::InstanceHandle::nil()) {
            ack_writer_.dispose_instance(handle);
        }
    }

    void dispose_status() {
        Sts status;
        status.source().id(source_id_);
        status.sessionID(session_id_);
        set_timestamp(status.timeStamp());
        auto handle = status_writer_.lookup_instance(status);
        if (handle != dds::core::InstanceHandle::nil()) {
            status_writer_.dispose_instance(handle);
        }
    }

    void dispose_exec() {
        Exec exec;
        // Exec types are keyed differently per service — lookup by registered instance
        auto handle = exec_writer_.lookup_instance(exec);
        if (handle != dds::core::InstanceHandle::nil()) {
            exec_writer_.dispose_instance(handle);
        }
    }
};

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_COMMAND_PROVIDER_SESSION_HPP
