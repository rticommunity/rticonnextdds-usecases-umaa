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

#ifndef UMAA_SDK_REPORT_PROVIDER_HPP
#define UMAA_SDK_REPORT_PROVIDER_HPP

#include <iostream>
#include <string>

#include <rti/rti.hpp>

#include "umaa/sdk/base_service.hpp"
#include "umaa/sdk/dds_context.hpp"

namespace umaa { namespace sdk {

/// Publishes a single keyed report type. On close(), disposes the instance
/// so subscribers see NOT_ALIVE_DISPOSED (per UMAA §5.2.1.3).
template<typename T>
class ReportProvider : public BaseService {
public:
    ReportProvider(DDSContext& ctx,
                   const std::string& topic_name,
                   const std::string& service_name = "")
        : BaseService(ctx, service_name.empty() ? ("ReportProvider:" + topic_name) : service_name),
          topic_name_(topic_name),
          writer_(ctx.create_writer<T>(topic_name)),
          handle_(dds::core::InstanceHandle::nil())
    {
    }

    /// Publish a report sample
    void write(const T& sample) {
        writer_.write(sample);
        if (handle_ == dds::core::InstanceHandle::nil()) {
            handle_ = writer_.lookup_instance(sample);
        }
    }

    /// Dispose the keyed instance and mark closed
    void close() override {
        if (handle_ != dds::core::InstanceHandle::nil()) {
            try {
                writer_.dispose_instance(handle_);
            } catch (const std::exception& e) {
                std::cerr << "[ReportProvider:" << this->service_name()
                          << "] dispose failed: " << e.what() << std::endl;
            }
            handle_ = dds::core::InstanceHandle::nil();
        }
    }

    /// Access the underlying DataWriter
    dds::pub::DataWriter<T>& writer() { return writer_; }
    const std::string& topic_name() const { return topic_name_; }

private:
    std::string topic_name_;
    dds::pub::DataWriter<T> writer_;
    dds::core::InstanceHandle handle_;
};

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_REPORT_PROVIDER_HPP
