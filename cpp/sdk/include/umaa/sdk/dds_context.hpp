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

#ifndef UMAA_SDK_DDS_CONTEXT_HPP
#define UMAA_SDK_DDS_CONTEXT_HPP

#include <atomic>
#include <csignal>
#include <functional>
#include <iostream>
#include <mutex>
#include <string>
#include <vector>

#include <rti/rti.hpp>
#include <rti/core/cond/AsyncWaitSet.hpp>

#include "umaa/sdk/guid_util.hpp"

namespace umaa { namespace sdk {

// Forward declaration
class BaseService;

inline constexpr const char* QOS_ASSIGNER_PROFILE = "UMAAQoSLib::AssignerQoS";
inline constexpr const char* QOS_PARTICIPANT_PROFILE = "UMAAQoSLib::DefaultUMAAParticipant";

struct DDSContextConfig {
    int domain_id = 0;
    std::string qos_file;         // defaults to env UMAA_QOS_FILE
    std::string source_guid;      // optional — auto-generated if empty
    int async_waitset_threads = 4;
};

class DDSContext {
public:
    explicit DDSContext(const DDSContextConfig& cfg);
    ~DDSContext();

    // Non-copyable, non-movable
    DDSContext(const DDSContext&) = delete;
    DDSContext& operator=(const DDSContext&) = delete;

    // Singleton access
    static DDSContext& current();

    // Entity factories — QoS resolved via topic_filter rules
    template<typename T>
    dds::pub::DataWriter<T> create_writer(const std::string& topic_name);

    template<typename T>
    dds::sub::DataReader<T> create_reader(const std::string& topic_name);

    // Service registry
    void register_service(const std::string& name, BaseService* svc);
    void unregister_service(const std::string& name);
    BaseService* get_service(const std::string& name) const;
    std::vector<std::string> registered_service_keys() const;

    // Lifecycle — blocks until SIGINT/SIGTERM
    void run_until_shutdown();
    void shutdown();
    bool is_shutdown() const { return shutdown_requested_.load(); }

    // AsyncWaitSet — services attach conditions to this
    rti::core::cond::AsyncWaitSet& async_waitset() { return async_waitset_; }

    // Accessors
    dds::domain::DomainParticipant& participant() { return participant_; }
    dds::pub::Publisher& publisher() { return publisher_; }
    dds::sub::Subscriber& subscriber() { return subscriber_; }
    dds::core::QosProvider& qos_provider() { return qos_provider_; }
    const NumericGuid& source_id() const { return source_id_; }
    int domain_id() const { return domain_id_; }

private:
    static DDSContext* instance_;

    int domain_id_;
    NumericGuid source_id_;

    dds::core::QosProvider qos_provider_;
    dds::domain::DomainParticipant participant_;
    dds::pub::Publisher publisher_;
    dds::sub::Subscriber subscriber_;
    rti::core::cond::AsyncWaitSet async_waitset_;

    // Service registry (insertion-ordered)
    mutable std::mutex registry_mutex_;
    std::vector<std::pair<std::string, BaseService*>> registry_;

    std::atomic<bool> shutdown_requested_{false};

    // Topic lookup/create helper
    template<typename T>
    dds::topic::Topic<T> get_topic(const std::string& topic_name);

    // Signal handling
    static void signal_handler(int sig);
    static std::atomic<bool> signal_caught_;
};

// ── Template implementations ──────────────────────────────────────────────

template<typename T>
dds::topic::Topic<T> DDSContext::get_topic(const std::string& topic_name) {
    auto topic = dds::topic::find<dds::topic::Topic<T>>(participant_, topic_name);
    if (topic == dds::core::null) {
        topic = dds::topic::Topic<T>(participant_, topic_name);
    }
    return topic;
}

template<typename T>
dds::pub::DataWriter<T> DDSContext::create_writer(const std::string& topic_name) {
    auto topic = get_topic<T>(topic_name);
    auto writer_qos = qos_provider_.extensions().datawriter_qos_w_topic_name(
        QOS_ASSIGNER_PROFILE, topic_name);
    return dds::pub::DataWriter<T>(publisher_, topic, writer_qos);
}

template<typename T>
dds::sub::DataReader<T> DDSContext::create_reader(const std::string& topic_name) {
    auto topic = get_topic<T>(topic_name);
    auto reader_qos = qos_provider_.extensions().datareader_qos_w_topic_name(
        QOS_ASSIGNER_PROFILE, topic_name);
    return dds::sub::DataReader<T>(subscriber_, topic, reader_qos);
}

}}  // namespace umaa::sdk

#endif  // UMAA_SDK_DDS_CONTEXT_HPP
