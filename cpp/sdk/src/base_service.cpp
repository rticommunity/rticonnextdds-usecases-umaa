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

#include "umaa/sdk/base_service.hpp"
#include "umaa/sdk/dds_context.hpp"

namespace umaa { namespace sdk {

BaseService::BaseService(DDSContext& ctx, const std::string& service_name)
    : ctx_(ctx),
      service_name_(service_name.empty() ? "UnnamedService" : service_name)
{
    ctx_.register_service(service_name_, this);
}

}}  // namespace umaa::sdk
