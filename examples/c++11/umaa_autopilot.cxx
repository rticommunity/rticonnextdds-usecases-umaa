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

    auto qos_provider = QosProvider("");
    _participant = qos_provider->create_participant_from_config(
            "umaa_components_lib::autopilot");

    lookup_entities();

    attach_reader_listeners();

    setup_async_waitset();

    std::cout << "Completed AutoPilot entities setup" << std::endl;
};


std::string AutoPilot::get_type_name(std::string topic_name)
{
    // Stripping namespaces from Topic to use as Type name
    // This needs to correllate with the XML definition in domain.xml
    // Workaround for CORE-15111 where Topic and Type name can't be equal.

    // Having a shorter Type name also makes it a bit more legible in print outs

    std::string type_name =
            topic_name.substr(topic_name.find_last_of("::") + 1);
    return type_name;
};

void AutoPilot::register_types()
{
    // Register all types used in this component.
    std::cout << "Registering Types" << std::endl;

    register_type<PrimitiveDriverCommandAckReportType>(
            get_type_name(PrimitiveDriverCommandAckReportTypeTopic));
    register_type<PrimitiveDriverCommandStatusType>(
            get_type_name(PrimitiveDriverCommandStatusTypeTopic));
    register_type<PrimitiveDriverExecutionStatusReportType>(
            get_type_name(PrimitiveDriverExecutionStatusReportTypeTopic));
    register_type<GlobalVectorCommandAckReportType>(
            get_type_name(GlobalVectorCommandAckReportTypeTopic));
    register_type<GlobalVectorCommandStatusType>(
            get_type_name(GlobalVectorCommandStatusTypeTopic));
    register_type<GlobalVectorExecutionStatusReportType>(
            get_type_name(GlobalVectorExecutionStatusReportTypeTopic));
    register_type<GlobalHoverCommandAckReportType>(
            get_type_name(GlobalHoverCommandAckReportTypeTopic));
    register_type<GlobalHoverCommandStatusType>(
            get_type_name(GlobalHoverCommandStatusTypeTopic));
    register_type<GlobalHoverExecutionStatusReportType>(
            get_type_name(GlobalHoverExecutionStatusReportTypeTopic));
    register_type<UVPlatformCapabilitiesReportType>(
            get_type_name(UVPlatformCapabilitiesReportTypeTopic));
    register_type<UVPlatformSpecsReportType>(
            get_type_name(UVPlatformSpecsReportTypeTopic));
    register_type<LogReportType>(get_type_name(LogReportTypeTopic));
    register_type<HealthReportType>(get_type_name(HealthReportTypeTopic));
    register_type<MissionPlanConstraintAddCommandType>(
            get_type_name(MissionPlanConstraintAddCommandTypeTopic));
    register_type<MissionPlanConstraintDeleteCommandType>(
            get_type_name(MissionPlanConstraintDeleteCommandTypeTopic));
    register_type<ActiveConstraintsCommandAckReportType>(
            get_type_name(ActiveConstraintsCommandAckReportTypeTopic));
    register_type<ActiveConstraintsCommandStatusType>(
            get_type_name(ActiveConstraintsCommandStatusTypeTopic));
    register_type<PrimitiveDriverCommandType>(
            get_type_name(PrimitiveDriverCommandTypeTopic));
    register_type<GlobalVectorCommandType>(
            get_type_name(GlobalVectorCommandTypeTopic));
    register_type<GlobalHoverCommandType>(
            get_type_name(GlobalHoverCommandTypeTopic));
    register_type<GlobalPoseReportType>(
            get_type_name(GlobalPoseReportTypeTopic));
    register_type<VelocityReportType>(get_type_name(VelocityReportTypeTopic));
    register_type<SpeedReportType>(get_type_name(SpeedReportTypeTopic));
    register_type<WindReportType>(get_type_name(WindReportTypeTopic));
    register_type<WaterCurrentReportType>(
            get_type_name(WaterCurrentReportTypeTopic));
    register_type<MissionPlanConstraintAddCommandAckReportType>(
            get_type_name(MissionPlanConstraintAddCommandAckReportTypeTopic));
    register_type<MissionPlanConstraintAddCommandStatusType>(
            get_type_name(MissionPlanConstraintAddCommandStatusTypeTopic));
    register_type<MissionPlanConstraintDeleteCommandAckReportType>(
            get_type_name(
                    MissionPlanConstraintDeleteCommandAckReportTypeTopic));
    register_type<MissionPlanConstraintDeleteCommandStatusType>(
            get_type_name(MissionPlanConstraintDeleteCommandStatusTypeTopic));
    register_type<ActiveConstraintsCommandType>(
            get_type_name(ActiveConstraintsCommandTypeTopic));
    register_type<ConditionalReportType>(
            get_type_name(ConditionalReportTypeTopic));
};

void AutoPilot::lookup_entities()
{
    try {
        // Get outputs
        _health_report_w = find_datawriter_by_topic_name<
                dds::pub::DataWriter<HealthReportType>>(
                find_publisher(_participant, PUBLISHER_NAME),
                HealthReportTypeTopic);

        // Get inputs
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

    // Could probably abstract away all of this, left for clarity
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
    // Due to thread context switch small impact to latency

    // Reference example: 
    // https://github.com/rticommunity/rticonnextdds-examples/tree/master/examples/connext_dds/asyncwaitset/c%2B%2B11

    // Class documentation:
    // https://community.rti.com/static/documentation/connext-dds/current/doc/api/connext_dds/api_cpp2/classrti_1_1core_1_1cond_1_1AsyncWaitSet.html#a9a0a88fa860f0d4cf06b115dee5e6d5c

    // Add Global Vector Status Condition and Handler function
    dds::core::cond::StatusCondition global_vector_sc(_global_vector_cmd_r);
    global_vector_sc.enabled_statuses(
            dds::core::status::StatusMask::data_available());

    global_vector_sc->handler([this](dds::core::cond::Condition) {
        this->process_keyed_samples<GlobalVectorCommandType>(
                _global_vector_cmd_r,
                _global_vector_commands);
    });

    // Attach conditions
    _async_waitset.attach_condition(global_vector_sc);

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

            // std::cout << sample.data() << std::endl;

            // Do something with data here
        }
    }
    // Sleep a random amount of time between 1 and 10 secs. This is
    // intended to cause the handling thread of the AWS to take a long
    // time dispatching
    rti::util::sleep(dds::core::Duration::from_secs(rand() % 10 + 1));
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

        // If Meta sample will construct empty <T> object i.e. clear it out
        // Meta sample == unregister/dispose so will likely want to clear data
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
    // Sleep a random amount of time between 1 and 10 secs. This is
    // intended to cause the handling thread of the AWS to take a long
    // time dispatching
    rti::util::sleep(dds::core::Duration::from_secs(rand() % 10 + 1));
}