/*
 * (c) Copyright, Real-Time Innovations, 2024.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 */


#include "umaa_autopilot.hpp"

void AutoPilot::create()
{
    // Need to register types first before you create Participant
    register_types();

    _participant = QosProvider::Default()->create_participant_from_config(
                                                             "umaa_components_lib::autopilot");

    lookup_entities();

    // attach_reader_listeners();

    setup_async_waitset();

    std::cout << "Completed AutoPilot entities setup" << std::endl;
};

void AutoPilot::register_types()
{
    /* 
      Register all types used in this component.
     */
    std::cout << "Registering Types" << std::endl;

    register_type<PrimitiveDriverCommandAckReportType>();
    register_type<PrimitiveDriverCommandStatusType>();
    register_type<PrimitiveDriverExecutionStatusReportType>();
    register_type<GlobalVectorCommandAckReportType>();
    register_type<GlobalVectorCommandStatusType>();
    register_type<GlobalVectorExecutionStatusReportType>();
    register_type<GlobalHoverCommandAckReportType>();
    register_type<GlobalHoverCommandStatusType>();
    register_type<GlobalHoverExecutionStatusReportType>();
    register_type<UVPlatformCapabilitiesReportType>();
    register_type<UVPlatformSpecsReportType>();
    register_type<LogReportType>();
    register_type<HealthReportType>();
    register_type<MissionPlanConstraintAddCommandType>();
    register_type<MissionPlanConstraintDeleteCommandType>();
    register_type<ActiveConstraintsCommandAckReportType>();
    register_type<ActiveConstraintsCommandStatusType>();
    register_type<PrimitiveDriverCommandType>();
    register_type<GlobalVectorCommandType>();
    register_type<GlobalHoverCommandType>();
    register_type<GlobalPoseReportType>();
    register_type<VelocityReportType>();
    register_type<SpeedReportType>();
    register_type<WindReportType>();
    register_type<WaterCurrentReportType>();
    register_type<MissionPlanConstraintAddCommandAckReportType>();
    register_type<MissionPlanConstraintAddCommandStatusType>();
    register_type<MissionPlanConstraintDeleteCommandAckReportType>();
    register_type<MissionPlanConstraintDeleteCommandStatusType>();
    register_type<ActiveConstraintsCommandType>();
    register_type<ConditionalReportType>();
};

void AutoPilot::lookup_entities()
{
    try {
        // Get outputs(writers)
        _health_report_w = find_datawriter_by_topic_name<
                dds::pub::DataWriter<HealthReportType>>(
                find_publisher(_participant, PUBLISHER_NAME),
                HealthReportTypeTopic);

        // Get inputs(readers)
        _speed_report_r = find_datareader_by_topic_name<
                dds::sub::DataReader<SpeedReportType>>(
                find_subscriber(_participant, SUBSCRIBER_NAME),
                SpeedReportTypeTopic);

        _globalpose_report_r = find_datareader_by_topic_name<
                dds::sub::DataReader<GlobalPoseReportType>>(
                find_subscriber(_participant, SUBSCRIBER_NAME),
                GlobalPoseReportTypeTopic);

        _velocity_report_r = find_datareader_by_topic_name<
                dds::sub::DataReader<VelocityReportType>>(
                find_subscriber(_participant, SUBSCRIBER_NAME),
                VelocityReportTypeTopic);

        _global_vector_cmd_r = find_datareader_by_topic_name<
                dds::sub::DataReader<GlobalVectorCommandType>>(
                find_subscriber(_participant, SUBSCRIBER_NAME),
                GlobalVectorCommandTypeTopic);

        std::cout << "Found entities" << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        std::cout << "Error Looking up entities" << std::endl;
    };
};

void AutoPilot::attach_reader_listeners()
{
    // Add listeners to our readers

    // Listeners are performed in the context of the receive thread, so only use
    // for lightweight operations

    // Lower latency than waitsets.

    // These are usually refactored with Templates, left as is for API usage clarity
    auto speed_report_listener =
            std::make_shared<ReportDataListener<SpeedReportType>>(
                    _speed_report_data);
    _speed_report_r.set_listener(speed_report_listener);

    auto globalpose_report_listener =
            std::make_shared<ReportDataListener<GlobalPoseReportType>>(
                    _globalpose_report_data);
    _globalpose_report_r.set_listener(globalpose_report_listener);

    auto velocity_report_listener =
            std::make_shared<ReportDataListener<VelocityReportType>>(
                    _velocity_report_data);
    _velocity_report_r.set_listener(velocity_report_listener);
};

void AutoPilot::setup_async_waitset()
{
    // Use waitsets for processes that might not be ligthweight.
    // Due to thread context switch small impact to latency relative to Listeners

    // Reference example: 
    // https://github.com/rticommunity/rticonnextdds-examples/tree/master/examples/connext_dds/asyncwaitset/c%2B%2B11

    // Class documentation:
    // https://community.rti.com/static/documentation/connext-dds/current/doc/api/connext_dds/api_cpp2/classrti_1_1core_1_1cond_1_1AsyncWaitSet.html#a9a0a88fa860f0d4cf06b115dee5e6d5c

    // Add Global Vector Status Condition and Keyed Data Handler function
    dds::core::cond::StatusCondition global_vector_sc(_global_vector_cmd_r);
    global_vector_sc.enabled_statuses(
            dds::core::status::StatusMask::data_available());

    global_vector_sc->handler([this](dds::core::cond::Condition) {
        this->process_keyed_samples<GlobalVectorCommandType>(
                _global_vector_cmd_r,
                _global_vector_commands);
    });

    // Add Speed Report Status Condition and Non-Keyed Data Handler function
    // This data could be handled with Keys/Instances if receiving from multiple 
    // sources as each source_id creates a unique Instance
    // but in this case we are only receiving from one source for simplicity
    dds::core::cond::StatusCondition speed_report_sc(_speed_report_r);
    speed_report_sc.enabled_statuses(
        dds::core::status::StatusMask::data_available());

    speed_report_sc->handler([this](dds::core::cond::Condition)
                             { this->process_samples<SpeedReportType>(
                                   _speed_report_r,
                                   _speed_report_data); });

    // Add Global Pose Report Status Condition and Non-Keyed Data Handler function
    dds::core::cond::StatusCondition global_pose_report_sc(_globalpose_report_r);
    global_pose_report_sc.enabled_statuses(
        dds::core::status::StatusMask::data_available());

    global_pose_report_sc->handler([this](dds::core::cond::Condition)
                                   { this->process_samples<GlobalPoseReportType>(
                                         _globalpose_report_r,
                                         _globalpose_report_data); });


    // Add Velocity Report Status Condition and Non-Keyed Data Handler function
    dds::core::cond::StatusCondition velocity_report_sc(_velocity_report_r);
    velocity_report_sc.enabled_statuses(
        dds::core::status::StatusMask::data_available());

    velocity_report_sc->handler([this](dds::core::cond::Condition)
                                { this->process_samples<VelocityReportType>(
                                      _velocity_report_r,
                                      _velocity_report_data); });

    // Attach conditions. The Async Waitset will be triggered when any of the
    // attached conditions are triggered.
    _async_waitset.attach_condition(global_vector_sc);
    _async_waitset.attach_condition(speed_report_sc);
    _async_waitset.attach_condition(global_pose_report_sc);
    _async_waitset.attach_condition(velocity_report_sc);

    // Start Async Waitset
    _async_waitset.start();
}

// Function not used, created as reference example
template <typename T>
void AutoPilot::process_samples(DataReader<T> reader, T &current_data)
{
    // Take all samples. This will reset the StatusCondition
    dds::sub::LoanedSamples<T> samples = reader.take();

    // Release status condition in case other threads can process outstanding
    // samples
    _async_waitset.unlock_condition(dds::core::cond::StatusCondition(reader));

    const std::lock_guard<std::mutex> lock(_m);

    // Process sample
    for (const auto &sample : samples) {
        if (sample.info().valid()) {
            std::cout << "Received " << reader.topic_description().type_name()
                      << " Sample\n"
                      << std::endl;

            current_data = sample.data();
            // std::cout << sample.data() << std::endl;
        }
    }
}

template <typename T>
void AutoPilot::process_keyed_samples(
        DataReader<T> reader,
        std::unordered_map<dds::core::InstanceHandle, dds::sub::Sample<T>>
                &keyed_data_map)
{
    auto samples = reader.take();

    // Release status condition in case other threads can process outstanding
    // samples
    _async_waitset.unlock_condition(dds::core::cond::StatusCondition(reader));

    const std::lock_guard<std::mutex> lock(_m);

    // For keyed data i.e. commands we will be updating a list of current/past
    // commands to keep track of their state as well as their most recent data.

    // Process sample
    for (const auto &sample : samples) {
        // Add Loaned Sample to map
        // Only retaining last sample within application state in this case

        // If meta sample will construct empty <T> object i.e blank sample.data object
        // (Meta sample == unregister/dispose)
        keyed_data_map[sample.info().instance_handle()] =
                dds::sub::Sample<T>(sample);

        // Uncomment to Print out
        // std::cout << keyed_data_map[sample.info().instance_handle()].data();

        if (sample.info().valid()) {
        //     std::cout << "Received new data sample for: "
        //               << reader.topic_description().type_name() << std::endl;

        } else {
        //     This would be a meta sample such as unregister or dispose
        //     std::cout << "Received new meta sample for: "
        //               << reader.topic_description().type_name() << std::endl;
        }
    }

}