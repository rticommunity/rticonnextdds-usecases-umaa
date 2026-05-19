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

#ifndef UMAA_SDK_BASE_SERVICE_HPP
#define UMAA_SDK_BASE_SERVICE_HPP

#include <string>

namespace umaa { namespace sdk {

// Forward declaration
class DDSContext;

class BaseService {
public:
    BaseService(DDSContext& ctx, const std::string& service_name = "");
    virtual ~BaseService() = default;

    // Non-copyable
    BaseService(const BaseService&) = delete;
    BaseService& operator=(const BaseService&) = delete;

    /// Called once before the run loop. Override for initialization.
    virtual void start() {}

    /// Cleanup: dispose instances, release resources. Must be idempotent.
    virtual void close() = 0;

    const std::string& service_name() const { return service_name_; }

protected:
    DDSContext& ctx_;
    std::string service_name_;
};

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_BASE_SERVICE_HPP
