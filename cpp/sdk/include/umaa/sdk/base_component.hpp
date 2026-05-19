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

#ifndef UMAA_SDK_BASE_COMPONENT_HPP
#define UMAA_SDK_BASE_COMPONENT_HPP

#include <memory>
#include <string>
#include <vector>

#include "umaa/sdk/base_service.hpp"

namespace umaa { namespace sdk {

class DDSContext;

class BaseComponent : public BaseService {
public:
    BaseComponent(DDSContext& ctx, const std::string& name);
    ~BaseComponent() override = default;

    /// Register a service owned by this component (takes ownership)
    template<typename T, typename... Args>
    T& register_service(Args&&... args) {
        auto svc = std::make_unique<T>(ctx_, std::forward<Args>(args)...);
        T& ref = *svc;
        services_.push_back(std::move(svc));
        return ref;
    }

    /// Called once at startup (override for component initialization)
    void start() override;

    /// Close all owned services in reverse order
    void close() override;

protected:
    /// Override for component-specific startup logic
    virtual void on_start() {}

private:
    std::vector<std::unique_ptr<BaseService>> services_;
};

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_BASE_COMPONENT_HPP
