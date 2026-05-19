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

#include "umaa/sdk/dds_context.hpp"
#include "umaa/sdk/base_service.hpp"

#include <algorithm>
#include <cstdlib>
#include <stdexcept>
#include <thread>

namespace umaa { namespace sdk {

// Static members
DDSContext* DDSContext::instance_ = nullptr;
std::atomic<bool> DDSContext::signal_caught_{false};

static std::string resolve_qos_file(const std::string& configured) {
    if (!configured.empty()) {
        return configured;
    }
    const char* env = std::getenv("UMAA_QOS_FILE");
    if (env && env[0] != '\0') {
        return std::string(env);
    }
    throw std::runtime_error(
        "UMAA_QOS_FILE environment variable is not set and no qos_file was provided in DDSContextConfig.");
}

DDSContext::DDSContext(const DDSContextConfig& cfg)
    : domain_id_(cfg.domain_id),
      source_id_(cfg.source_guid.empty() ? GUIDUtil::generate() : GUIDUtil::from_string(cfg.source_guid)),
      qos_provider_(resolve_qos_file(cfg.qos_file)),
      participant_(dds::core::null),
      publisher_(dds::core::null),
      subscriber_(dds::core::null),
      async_waitset_(rti::core::cond::AsyncWaitSetProperty()
          .thread_pool_size(cfg.async_waitset_threads))
{
    if (instance_ != nullptr) {
        throw std::runtime_error(
            "A DDSContext already exists. Call shutdown() before creating a new one.");
    }

    // Set default QoS profile for topic_filter matching
    qos_provider_.extensions().default_profile(QOS_ASSIGNER_PROFILE);

    // Create DomainParticipant with profile QoS
    participant_ = dds::domain::DomainParticipant(
        domain_id_,
        qos_provider_.participant_qos(QOS_PARTICIPANT_PROFILE));

    // Create shared Publisher and Subscriber
    publisher_ = dds::pub::Publisher(participant_);
    subscriber_ = dds::sub::Subscriber(participant_);

    // Start the AsyncWaitSet
    async_waitset_.start();

    // Commit singleton
    instance_ = this;

    std::cerr << "[DDSContext] Created on domain " << domain_id_
              << ", source GUID: " << GUIDUtil::to_string(source_id_) << std::endl;
}

DDSContext::~DDSContext() {
    if (!shutdown_requested_.load()) {
        shutdown();
    }
}

DDSContext& DDSContext::current() {
    if (instance_ == nullptr) {
        throw std::runtime_error("DDSContext not initialized.");
    }
    return *instance_;
}

void DDSContext::register_service(const std::string& name, BaseService* svc) {
    std::lock_guard<std::mutex> lock(registry_mutex_);
    for (const auto& entry : registry_) {
        if (entry.first == name) {
            throw std::runtime_error(
                "Service already registered under key '" + name + "'.");
        }
    }
    registry_.emplace_back(name, svc);
}

void DDSContext::unregister_service(const std::string& name) {
    std::lock_guard<std::mutex> lock(registry_mutex_);
    registry_.erase(
        std::remove_if(registry_.begin(), registry_.end(),
            [&name](const std::pair<std::string, BaseService*>& p) {
                return p.first == name;
            }),
        registry_.end());
}

BaseService* DDSContext::get_service(const std::string& name) const {
    std::lock_guard<std::mutex> lock(registry_mutex_);
    for (const auto& entry : registry_) {
        if (entry.first == name) {
            return entry.second;
        }
    }
    return nullptr;
}

std::vector<std::string> DDSContext::registered_service_keys() const {
    std::lock_guard<std::mutex> lock(registry_mutex_);
    std::vector<std::string> keys;
    keys.reserve(registry_.size());
    for (const auto& entry : registry_) {
        keys.push_back(entry.first);
    }
    return keys;
}

void DDSContext::signal_handler(int) {
    signal_caught_.store(true);
}

void DDSContext::run_until_shutdown() {
    // Install signal handlers
    std::signal(SIGINT, signal_handler);
    std::signal(SIGTERM, signal_handler);

    // Start all registered services
    {
        std::lock_guard<std::mutex> lock(registry_mutex_);
        for (auto& entry : registry_) {
            entry.second->start();
        }
    }

    std::cerr << "[DDSContext] Running. Press Ctrl+C to shut down." << std::endl;

    // Block until signal
    while (!signal_caught_.load() && !shutdown_requested_.load()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    shutdown();
}

void DDSContext::shutdown() {
    if (shutdown_requested_.exchange(true)) {
        return;  // Already shutting down
    }

    std::cerr << "[DDSContext] Shutting down..." << std::endl;

    // Stop AsyncWaitSet first (no more callbacks)
    async_waitset_.stop();

    // Close services in reverse registration order
    {
        std::lock_guard<std::mutex> lock(registry_mutex_);
        for (auto it = registry_.rbegin(); it != registry_.rend(); ++it) {
            try {
                it->second->close();
            } catch (const std::exception& e) {
                std::cerr << "[DDSContext] Error closing service '"
                          << it->first << "': " << e.what() << std::endl;
            }
        }
        registry_.clear();
    }

    // Close DDS entities
    participant_.close();

    instance_ = nullptr;
    std::cerr << "[DDSContext] Shutdown complete." << std::endl;
}

}}  // namespace umaa::sdk
