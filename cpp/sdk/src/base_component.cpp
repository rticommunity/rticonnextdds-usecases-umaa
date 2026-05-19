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

#include "umaa/sdk/base_component.hpp"
#include "umaa/sdk/dds_context.hpp"

#include <iostream>

namespace umaa { namespace sdk {

BaseComponent::BaseComponent(DDSContext& ctx, const std::string& name)
    : BaseService(ctx, name)
{
}

void BaseComponent::start() {
    // Start all owned services first
    for (auto& svc : services_) {
        svc->start();
    }
    // Then call component-specific startup
    on_start();
}

void BaseComponent::close() {
    // Close owned services in reverse order
    for (auto it = services_.rbegin(); it != services_.rend(); ++it) {
        try {
            (*it)->close();
        } catch (const std::exception& e) {
            std::cerr << "[BaseComponent:" << service_name()
                      << "] Error closing service: " << e.what() << std::endl;
        }
    }
    services_.clear();
}

}}  // namespace umaa::sdk
