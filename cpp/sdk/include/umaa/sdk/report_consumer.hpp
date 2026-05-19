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

#ifndef UMAA_SDK_REPORT_CONSUMER_HPP
#define UMAA_SDK_REPORT_CONSUMER_HPP

#include <functional>
#include <iostream>
#include <string>

#include <rti/rti.hpp>
#include <rti/core/cond/AsyncWaitSet.hpp>

#include "umaa/sdk/base_service.hpp"
#include "umaa/sdk/dds_context.hpp"

namespace umaa { namespace sdk {

/// Subscribes to a single report type and delivers incoming samples via
/// the on_report() virtual hook or a std::function callback.
template<typename T>
class ReportConsumer : public BaseService {
public:
    using Callback = std::function<void(const T&)>;

    ReportConsumer(DDSContext& ctx,
                   const std::string& topic_name,
                   const std::string& service_name = "",
                   Callback on_report_cb = nullptr)
        : BaseService(ctx, service_name.empty() ? ("ReportConsumer:" + topic_name) : service_name),
          topic_name_(topic_name),
          reader_(ctx.create_reader<T>(topic_name)),
          callback_(std::move(on_report_cb)),
          condition_(dds::core::null)
    {
        // Attach a StatusCondition to the shared AsyncWaitSet
        condition_ = dds::core::cond::StatusCondition(reader_);
        condition_.enabled_statuses(dds::core::status::StatusMask::data_available());

        condition_->handler([this](dds::core::cond::Condition) {
            auto samples = reader_.take();
            ctx_.async_waitset().unlock_condition(condition_);

            for (const auto& sample : samples) {
                if (sample.info().valid()) {
                    try {
                        if (callback_) {
                            callback_(sample.data());
                        }
                        on_report(sample.data());
                    } catch (const std::exception& e) {
                        std::cerr << "[ReportConsumer:" << this->service_name()
                                  << "] on_report hook failed: " << e.what()
                                  << std::endl;
                    }
                }
            }
        });

        ctx.async_waitset().attach_condition(condition_);
    }

    /// Override in a subclass to process incoming samples. Default is no-op.
    virtual void on_report(const T& /*sample*/) {}

    void close() override {
        if (condition_ != dds::core::null) {
            try {
                ctx_.async_waitset().detach_condition(condition_);
            } catch (...) {}
            condition_ = dds::core::null;
        }
    }

    /// Access the underlying DataReader
    dds::sub::DataReader<T>& reader() { return reader_; }
    const std::string& topic_name() const { return topic_name_; }

private:
    std::string topic_name_;
    dds::sub::DataReader<T> reader_;
    Callback callback_;
    dds::core::cond::StatusCondition condition_;
};

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_REPORT_CONSUMER_HPP
