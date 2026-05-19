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

#ifndef UMAA_SDK_COMMAND_CONSUMER_HPP
#define UMAA_SDK_COMMAND_CONSUMER_HPP

#include <functional>
#include <iostream>
#include <string>

#include <rti/rti.hpp>
#include <rti/core/cond/AsyncWaitSet.hpp>

#include "umaa/sdk/base_service.hpp"
#include "umaa/sdk/command_state_machine.hpp"
#include "umaa/sdk/dds_context.hpp"
#include "umaa/sdk/guid_util.hpp"
#include "umaa/sdk/timestamp.hpp"

namespace umaa { namespace sdk {

/// Command service consumer (consumer side of a UMAA command service).
/// Sends commands and receives ack/status responses via AsyncWaitSet.
///
/// Subclass and override on_ack()/on_status() hooks, or provide callbacks.
template<typename Cmd, typename Ack, typename Sts>
class CommandConsumer : public BaseService {
public:
    using AckCallback = std::function<void(const Ack&)>;
    using StatusCallback = std::function<void(const Sts&)>;

    CommandConsumer(
            DDSContext& ctx,
            const std::string& cmd_topic,
            const std::string& ack_topic,
            const std::string& sts_topic,
            const std::string& service_name = "",
            AckCallback on_ack_cb = nullptr,
            StatusCallback on_status_cb = nullptr)
        : BaseService(ctx, service_name.empty() ? ("CommandConsumer:" + cmd_topic) : service_name),
          cmd_writer_(ctx.create_writer<Cmd>(cmd_topic)),
          ack_reader_(ctx.create_reader<Ack>(ack_topic)),
          sts_reader_(ctx.create_reader<Sts>(sts_topic)),
          on_ack_cb_(std::move(on_ack_cb)),
          on_status_cb_(std::move(on_status_cb)),
          ack_condition_(dds::core::null),
          sts_condition_(dds::core::null)
    {
        // Attach ack reader
        ack_condition_ = dds::core::cond::StatusCondition(ack_reader_);
        ack_condition_.enabled_statuses(dds::core::status::StatusMask::data_available());
        ack_condition_->handler([this](dds::core::cond::Condition) {
            auto samples = ack_reader_.take();
            ctx_.async_waitset().unlock_condition(ack_condition_);
            for (const auto& sample : samples) {
                if (sample.info().valid()) {
                    try {
                        if (on_ack_cb_) on_ack_cb_(sample.data());
                        on_ack(sample.data());
                    } catch (const std::exception& e) {
                        std::cerr << "[CommandConsumer:" << this->service_name()
                                  << "] on_ack failed: " << e.what() << std::endl;
                    }
                }
            }
        });
        ctx.async_waitset().attach_condition(ack_condition_);

        // Attach status reader
        sts_condition_ = dds::core::cond::StatusCondition(sts_reader_);
        sts_condition_.enabled_statuses(dds::core::status::StatusMask::data_available());
        sts_condition_->handler([this](dds::core::cond::Condition) {
            auto samples = sts_reader_.take();
            ctx_.async_waitset().unlock_condition(sts_condition_);
            for (const auto& sample : samples) {
                if (sample.info().valid()) {
                    try {
                        if (on_status_cb_) on_status_cb_(sample.data());
                        on_status(sample.data());
                    } catch (const std::exception& e) {
                        std::cerr << "[CommandConsumer:" << this->service_name()
                                  << "] on_status failed: " << e.what() << std::endl;
                    }
                }
            }
        });
        ctx.async_waitset().attach_condition(sts_condition_);
    }

    /// Send a command. Populates source and timestamp automatically.
    void send_command(Cmd& cmd) {
        cmd.source().id(ctx_.source_id());
        set_timestamp(cmd.timeStamp());
        cmd_writer_.write(cmd);
    }

    /// Override in subclass to handle acks
    virtual void on_ack(const Ack& /*ack*/) {}

    /// Override in subclass to handle status updates
    virtual void on_status(const Sts& /*status*/) {}

    void close() override {
        if (ack_condition_ != dds::core::null) {
            try { ctx_.async_waitset().detach_condition(ack_condition_); } catch (...) {}
            ack_condition_ = dds::core::null;
        }
        if (sts_condition_ != dds::core::null) {
            try { ctx_.async_waitset().detach_condition(sts_condition_); } catch (...) {}
            sts_condition_ = dds::core::null;
        }
    }

    dds::pub::DataWriter<Cmd>& cmd_writer() { return cmd_writer_; }
    dds::sub::DataReader<Ack>& ack_reader() { return ack_reader_; }
    dds::sub::DataReader<Sts>& sts_reader() { return sts_reader_; }

private:
    dds::pub::DataWriter<Cmd> cmd_writer_;
    dds::sub::DataReader<Ack> ack_reader_;
    dds::sub::DataReader<Sts> sts_reader_;
    AckCallback on_ack_cb_;
    StatusCallback on_status_cb_;
    dds::core::cond::StatusCondition ack_condition_;
    dds::core::cond::StatusCondition sts_condition_;
};

/// Command consumer variant that also subscribes to an execution status topic
template<typename Cmd, typename Ack, typename Sts, typename Exec>
class CommandConsumerWithExec : public BaseService {
public:
    using AckCallback = std::function<void(const Ack&)>;
    using StatusCallback = std::function<void(const Sts&)>;
    using ExecCallback = std::function<void(const Exec&)>;

    CommandConsumerWithExec(
            DDSContext& ctx,
            const std::string& cmd_topic,
            const std::string& ack_topic,
            const std::string& sts_topic,
            const std::string& exec_topic,
            const std::string& service_name = "",
            AckCallback on_ack_cb = nullptr,
            StatusCallback on_status_cb = nullptr,
            ExecCallback on_exec_cb = nullptr)
        : BaseService(ctx, service_name.empty() ? ("CommandConsumer:" + cmd_topic) : service_name),
          cmd_writer_(ctx.create_writer<Cmd>(cmd_topic)),
          ack_reader_(ctx.create_reader<Ack>(ack_topic)),
          sts_reader_(ctx.create_reader<Sts>(sts_topic)),
          exec_reader_(ctx.create_reader<Exec>(exec_topic)),
          on_ack_cb_(std::move(on_ack_cb)),
          on_status_cb_(std::move(on_status_cb)),
          on_exec_cb_(std::move(on_exec_cb)),
          ack_condition_(dds::core::null),
          sts_condition_(dds::core::null),
          exec_condition_(dds::core::null)
    {
        // Ack reader
        ack_condition_ = dds::core::cond::StatusCondition(ack_reader_);
        ack_condition_.enabled_statuses(dds::core::status::StatusMask::data_available());
        ack_condition_->handler([this](dds::core::cond::Condition) {
            auto samples = ack_reader_.take();
            ctx_.async_waitset().unlock_condition(ack_condition_);
            for (const auto& sample : samples) {
                if (sample.info().valid()) {
                    try {
                        if (on_ack_cb_) on_ack_cb_(sample.data());
                        on_ack(sample.data());
                    } catch (const std::exception& e) {
                        std::cerr << "[CommandConsumer:" << this->service_name()
                                  << "] on_ack failed: " << e.what() << std::endl;
                    }
                }
            }
        });
        ctx.async_waitset().attach_condition(ack_condition_);

        // Status reader
        sts_condition_ = dds::core::cond::StatusCondition(sts_reader_);
        sts_condition_.enabled_statuses(dds::core::status::StatusMask::data_available());
        sts_condition_->handler([this](dds::core::cond::Condition) {
            auto samples = sts_reader_.take();
            ctx_.async_waitset().unlock_condition(sts_condition_);
            for (const auto& sample : samples) {
                if (sample.info().valid()) {
                    try {
                        if (on_status_cb_) on_status_cb_(sample.data());
                        on_status(sample.data());
                    } catch (const std::exception& e) {
                        std::cerr << "[CommandConsumer:" << this->service_name()
                                  << "] on_status failed: " << e.what() << std::endl;
                    }
                }
            }
        });
        ctx.async_waitset().attach_condition(sts_condition_);

        // Exec status reader
        exec_condition_ = dds::core::cond::StatusCondition(exec_reader_);
        exec_condition_.enabled_statuses(dds::core::status::StatusMask::data_available());
        exec_condition_->handler([this](dds::core::cond::Condition) {
            auto samples = exec_reader_.take();
            ctx_.async_waitset().unlock_condition(exec_condition_);
            for (const auto& sample : samples) {
                if (sample.info().valid()) {
                    try {
                        if (on_exec_cb_) on_exec_cb_(sample.data());
                        on_exec_status(sample.data());
                    } catch (const std::exception& e) {
                        std::cerr << "[CommandConsumer:" << this->service_name()
                                  << "] on_exec_status failed: " << e.what() << std::endl;
                    }
                }
            }
        });
        ctx.async_waitset().attach_condition(exec_condition_);
    }

    void send_command(Cmd& cmd) {
        cmd.source().id(ctx_.source_id());
        set_timestamp(cmd.timeStamp());
        cmd_writer_.write(cmd);
    }

    virtual void on_ack(const Ack& /*ack*/) {}
    virtual void on_status(const Sts& /*status*/) {}
    virtual void on_exec_status(const Exec& /*exec*/) {}

    void close() override {
        if (ack_condition_ != dds::core::null) {
            try { ctx_.async_waitset().detach_condition(ack_condition_); } catch (...) {}
            ack_condition_ = dds::core::null;
        }
        if (sts_condition_ != dds::core::null) {
            try { ctx_.async_waitset().detach_condition(sts_condition_); } catch (...) {}
            sts_condition_ = dds::core::null;
        }
        if (exec_condition_ != dds::core::null) {
            try { ctx_.async_waitset().detach_condition(exec_condition_); } catch (...) {}
            exec_condition_ = dds::core::null;
        }
    }

    dds::pub::DataWriter<Cmd>& cmd_writer() { return cmd_writer_; }
    dds::sub::DataReader<Ack>& ack_reader() { return ack_reader_; }
    dds::sub::DataReader<Sts>& sts_reader() { return sts_reader_; }
    dds::sub::DataReader<Exec>& exec_reader() { return exec_reader_; }

private:
    dds::pub::DataWriter<Cmd> cmd_writer_;
    dds::sub::DataReader<Ack> ack_reader_;
    dds::sub::DataReader<Sts> sts_reader_;
    dds::sub::DataReader<Exec> exec_reader_;
    AckCallback on_ack_cb_;
    StatusCallback on_status_cb_;
    ExecCallback on_exec_cb_;
    dds::core::cond::StatusCondition ack_condition_;
    dds::core::cond::StatusCondition sts_condition_;
    dds::core::cond::StatusCondition exec_condition_;
};

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_COMMAND_CONSUMER_HPP
