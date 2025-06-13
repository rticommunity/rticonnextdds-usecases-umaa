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

#ifndef DDS_UMAA_PARTICIPANT_HPP
#define DDS_UMAA_PARTICIPANT_HPP

#include <iostream>
#include <csignal>
#include <string>
#include <mutex>
#include <unordered_map>
#include <rti/rti.hpp>  // include all base plus extensions

#include <rti/core/cond/AsyncWaitSet.hpp>

#include "UMAA/MO/PrimitiveDriverControl/PrimitiveDriverCommandAckReportType.hpp"
#include "UMAA/MO/PrimitiveDriverControl/PrimitiveDriverCommandStatusType.hpp"
#include "UMAA/MO/PrimitiveDriverControl/PrimitiveDriverExecutionStatusReportType.hpp"
#include "UMAA/MO/PrimitiveDriverControl/PrimitiveDriverCommandType.hpp"
#include "UMAA/MO/GlobalVectorControl/GlobalVectorCommandAckReportType.hpp"
#include "UMAA/MO/GlobalVectorControl/GlobalVectorCommandStatusType.hpp"
#include "UMAA/MO/GlobalVectorControl/GlobalVectorExecutionStatusReportType.hpp"
#include "UMAA/MO/GlobalVectorControl/GlobalVectorCommandType.hpp"
#include "UMAA/MO/GlobalHoverControl/GlobalHoverCommandAckReportType.hpp"
#include "UMAA/MO/GlobalHoverControl/GlobalHoverCommandStatusType.hpp"
#include "UMAA/MO/GlobalHoverControl/GlobalHoverExecutionStatusReportType.hpp"
#include "UMAA/MO/GlobalHoverControl/GlobalHoverCommandType.hpp"
#include "UMAA/EO/UVPlatformSpecs/UVPlatformCapabilitiesReportType.hpp"
#include "UMAA/EO/UVPlatformSpecs/UVPlatformSpecsReportType.hpp"
#include "UMAA/SO/LogReport/LogReportType.hpp"
#include "UMAA/SO/HealthReport/HealthReportType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintAddCommandAckReportType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintAddCommandStatusType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintDeleteCommandAckReportType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintDeleteCommandStatusType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintAddCommandType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintDeleteCommandType.hpp"
#include "UMAA/MM/ActiveConstraintsControl/ActiveConstraintsCommandAckReportType.hpp"
#include "UMAA/MM/ActiveConstraintsControl/ActiveConstraintsCommandStatusType.hpp"
#include "UMAA/MM/ActiveConstraintsControl/ActiveConstraintsCommandType.hpp"
#include "UMAA/MM/ConditionalReport/ConditionalReportType.hpp"
#include "UMAA/SA/GlobalPoseStatus/GlobalPoseReportType.hpp"
#include "UMAA/SA/VelocityStatus/VelocityReportType.hpp"
#include "UMAA/SA/SpeedStatus/SpeedReportType.hpp"
#include "UMAA/SA/WindStatus/WindReportType.hpp"
#include "UMAA/SA/WaterCurrentStatus/WaterCurrentReportType.hpp"

// For example legibility.
using namespace rti::all;

using namespace UMAA::MO::PrimitiveDriverControl;
using namespace UMAA::MO::GlobalVectorControl;
using namespace UMAA::MO::GlobalHoverControl;
using namespace UMAA::EO::UVPlatformSpecs;
using namespace UMAA::SO::LogReport;
using namespace UMAA::SO::HealthReport;
using namespace UMAA::MM::MissionPlanConstraintControl;
using namespace UMAA::MM::ActiveConstraintsControl;
using namespace UMAA::SA::SpeedStatus;
using namespace UMAA::SA::GlobalPoseStatus;
using namespace UMAA::SA::VelocityStatus;
using namespace UMAA::SA::WindStatus;
using namespace UMAA::SA::WaterCurrentStatus;
using namespace UMAA::MM::ConditionalReport;

const std::string PUBLISHER_NAME = "pub";
const std::string SUBSCRIBER_NAME = "sub";


// InstanceHandle, Condition types and Entity types were made hashable in 7.0
#if RTI_DDS_VERSION_MAJOR < 7
namespace std {
template <>
struct hash<dds::core::detail::InstanceHandle> {
    size_t operator()(const dds::core::detail::InstanceHandle &h) const
    {
        // elements_to_hash will be 16 / 8 = 2 for 64-bit architectures and
        // 16 / 4 = 4 for 32-bit architectures.
        constexpr size_t elements_to_hash =
                static_cast<size_t>(MIG_RTPS_KEY_HASH_MAX_LENGTH)
                / sizeof(size_t);
        const size_t *key_hash = reinterpret_cast<const size_t *>(
                &h.extensions().native().keyHash.value[0]);

        // This loop should be optimized away by most 64-bit compilers
        size_t result = 0;
        for (size_t i = 0; i < elements_to_hash; ++i) {
            result ^= key_hash[i];
        }

        return result;
    }
};

}  // namespace std
#endif

// This is a listener that will be used to receive events from the
// DomainParticipant i.e. the DDS "Bus"
class MyParticipantListener
        : public dds::domain::NoOpDomainParticipantListener {
public:
    virtual void on_requested_deadline_missed(
            dds::pub::AnyDataWriter &writer,
            const dds::core::status::OfferedDeadlineMissedStatus &status)
    {
        std::cout << "ParticipantListener: on_requested_deadline_missed()"
                  << std::endl;
    }

    virtual void on_offered_incompatible_qos(
            dds::pub::AnyDataWriter &writer,
            const ::dds::core::status::OfferedIncompatibleQosStatus &status)
    {
        std::cout << "ParticipantListener: on_offered_incompatible_qos()"
                  << std::endl;
    }

    virtual void on_sample_rejected(
            dds::sub::AnyDataReader &the_reader,
            const dds::core::status::SampleRejectedStatus &status)
    {
        std::cout << "ParticipantListener: on_sample_rejected()" << std::endl;
    }

    virtual void on_liveliness_changed(
            dds::sub::AnyDataReader &the_reader,
            const dds::core::status::LivelinessChangedStatus &status)
    {
        std::cout << "ParticipantListener: on_liveliness_changed()"
                  << std::endl;
    }

    virtual void on_sample_lost(
            dds::sub::AnyDataReader &the_reader,
            const dds::core::status::SampleLostStatus &status)
    {
        std::cout << "ParticipantListener: on_sample_lost()" << std::endl;
    }

    virtual void on_subscription_matched(
            dds::sub::AnyDataReader &the_reader,
            const dds::core::status::SubscriptionMatchedStatus &status)
    {
        std::cout << "ParticipantListener: on_subscription_matched()"
                  << std::endl;
    }

    virtual void on_inconsistent_topic(
            dds::topic::AnyTopic &topic,
            const dds::core::status::InconsistentTopicStatus &status)
    {
        std::cout << "ParticipantListener: on_inconsistent_topic()"
                  << std::endl;
    }
};

class DDSUMAAParticipant {
public:
    DDSUMAAParticipant(int threads)
            : _async_waitset(AsyncWaitSetProperty().thread_pool_size(threads))
    {
        std::cout << "Created AutoPilot Component" << std::endl;
    }

    void create();

    DataWriter<HealthReportType> get_health_report_writer()
    {
        return _health_report_w;
    };

    DataReader<GlobalVectorCommandType> get_globalvector_cmd_reader()
    {
        return _globalvector_cmd_r;
    };

    const SpeedReportType &get_speed_report_data()
    {
        return _speed_report_data;
    };

    const GlobalPoseReportType &get_globalpose_report_data()
    {
        return _globalpose_report_data;
    };

    const VelocityReportType &get_velocity_report_data()
    {
        return _velocity_report_data;
    };

    const dds::sub::Sample<GlobalVectorCommandType> &
    get_active_globalvector_command()
    {
        return _globalvector_commands.at(
                _active_globalvector_command_instance);
    };

    const dds::core::InstanceHandle &get_active_globalvector_command_instance()
    {
        return _active_globalvector_command_instance;
    }


private:
    // Domain Participant
    DomainParticipant _participant = dds::core::null;

    // Writers
    DataWriter<HealthReportType> _health_report_w = dds::core::null;

    // Async Waitset
    rti::core::cond::AsyncWaitSet _async_waitset = dds::core::null;

    // Readers/Containers
    // Probably abstract into wrapper object, left minimal for clarity
    DataReader<SpeedReportType> _speed_report_r = dds::core::null;
    SpeedReportType _speed_report_data;

    DataReader<GlobalPoseReportType> _globalpose_report_r = dds::core::null;
    GlobalPoseReportType _globalpose_report_data;

    DataReader<VelocityReportType> _velocity_report_r = dds::core::null;
    VelocityReportType _velocity_report_data;

    DataReader<GlobalVectorCommandType> _globalvector_cmd_r = dds::core::null;
    std::unordered_map<
            dds::core::InstanceHandle,
            dds::sub::Sample<GlobalVectorCommandType>>
            _globalvector_commands;

    dds::core::InstanceHandle _active_globalvector_command_instance =
            dds::core::null;


    // Functions
    void register_types();

    void lookup_entities();

    void setup_async_waitset();

    void attach_reader_listeners();

    template <typename T>
    void process_samples(DataReader<T> reader, T &current_data);

    template <typename T>
    void process_keyed_samples(
            DataReader<T> reader,
            std::unordered_map<dds::core::InstanceHandle, dds::sub::Sample<T>>
                    &keyed_data_map,
            dds::core::InstanceHandle &active_instance);

    std::mutex _m;
};


#endif  // DDS_UMAA_PARTICIPANT_HPP
