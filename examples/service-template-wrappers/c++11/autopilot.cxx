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

#include <algorithm>
#include <iostream>

#include <rti/rti.hpp>  // include all base plus extensions

#include "application.hpp"  // Argument parsing
#include "dds_umaa_service.hpp"
#include "dds_umaa_participant.hpp"
#include "umaa_services.hpp"

using namespace application;

// Include all rti namespaces. Done for easier legibility.
using namespace rti::all;

void run(ApplicationArguments args)
{
    // Note: Error handling ommitted for API example clarity


    // Initialize the DDSUMAAParticipant before using it
    // Light wrapper class around the DDS Participant to include some extra
    // metadata
    auto dp = std::make_shared<DDSUMAAParticipant>(args.domain_id);

    // Create Service Classes and setup Async Waitsets
    GlobalVectorControlServiceProvider globalvector_command_provider(dp);
    globalvector_command_provider.enable_async_waitset();

    SpeedReportServiceConsumer speed_status_consumer(dp);
    speed_status_consumer.enable_async_waitset();

    VelocityReportServiceConsumer velocity_status_consumer(dp);
    velocity_status_consumer.enable_async_waitset();

    GlobalPoseReportServiceConsumer globalpose_status_consumer(dp);
    globalpose_status_consumer.enable_async_waitset();

    HealthReportServiceProvider health_provider(dp);
    HealthReportType health_report_sample;

    std::cout << "Entering Run loop \n";

    while (!shutdown_requested) {
        // Write a Health Report Status out
        std::string status_str = "Healthy";
        health_report_sample.status(status_str);
        health_provider.get_status_writer().write(health_report_sample);
        std::cout << "Sending Health Report/Waiting for data\n";

        std::cout << "\n\n"
                     "_________________________________________________\n"
                     "Telemetry Reports:\n"
                     "_________________________________________________\n";

        // Check if there is any Speed Data
        auto speed_report_active_instance =
                speed_status_consumer.get_active_status_instance();
        if (speed_report_active_instance != dds::core::null) {
            // Just getting the first one
            auto speed_report_sample =
                    speed_status_consumer.get_active_status_sample();

            // Optional, so check first
            if (speed_report_sample.data().speedThroughWater().has_value()) {
                auto current_speed =
                        speed_report_sample.data().speedThroughWater().value();
                std::cout << "SPEED : " << current_speed << std::endl;
            }
        }

        // Check if there is any GlobalPoseReport Data
        auto globalpose_report_active_instance =
                globalpose_status_consumer.get_active_status_instance();
        if (globalpose_report_active_instance != dds::core::null) {
            // Just getting the first one
            auto globalpose_report_sample =
                    globalpose_status_consumer.get_active_status_sample();

            std::cout << "LAT: "
                      << globalpose_report_sample.data()
                                 .position()
                                 .geodeticLatitude()
                      << std::endl;
            std::cout << "LON: "
                      << globalpose_report_sample.data()
                                 .position()
                                 .geodeticLongitude()
                      << std::endl;
        }

        // Check if there is any VelocityReport Data
        auto velocity_report_active_instance =
                velocity_status_consumer.get_active_status_instance();
        if (velocity_report_active_instance != dds::core::null) {
            // Get Active Instance Latest Sample Data
            auto velocity_report_sample =
                    velocity_status_consumer.get_active_status_sample();

            std::cout << "EAST SPEED: "
                      << velocity_report_sample.data().velocity().eastSpeed()
                      << std::endl;
            std::cout << "NORTH SPEED: "
                      << velocity_report_sample.data().velocity().northSpeed()
                      << std::endl;
        }


        /** This is just a reference for accessing Instance Sample Data values.
         *  For UMAA Flow Control there would be more involved such as changing
         *  the Active Instances Command States etc.
         *  Currently out of scope for this example.
         **/
        auto globalvector_command_active_instance =
                globalvector_command_provider.get_active_command_instance();

        if (globalvector_command_active_instance != dds::core::null) {
            auto active_globalvector_command =
                    globalvector_command_provider.get_active_command_sample();

            std::cout << "\n\n"
                         "_________________________________________________\n"
                         "Active Global Vector Command:\n"
                         "_________________________________________________\n";

            std::cout << "Instance Handle: "
                      << globalvector_command_active_instance << std::endl;
            std::cout << "State: "
                      << active_globalvector_command.info()
                                 .state()
                                 .instance_state()
                      << std::endl;

            if (active_globalvector_command.info().state().instance_state()
                == InstanceState::alive()) {
                std::cout << "Current Water Speed Command: "
                          << active_globalvector_command.data()
                                     .speed()
                                     .SpeedRequirementVariantTypeSubtypes()
                                     .WaterSpeedRequirementVariantVariant()
                                     .speed()
                                     .speed()
                          << std::endl;

                /**
                 * Convert InstanceHandle back to individual values
                 * This is for the use case when you receive a command and
                 * need to update the corresponding CommandStatus using the
                 * SessionID with the current state
                 **/
                GlobalVectorCommandType key_holder;

                globalvector_command_provider.get_command_reader().key_value(
                        key_holder,
                        globalvector_command_active_instance);

                // Print Session ID
                auto session_id = key_holder.sessionID();
                std::cout << "Session ID: ";
                for (const auto &byte : session_id) {
                    printf("%02x ", byte);
                }
                std::cout << std::endl;

                // Print Destination ID
                auto dest_id = key_holder.destination().parentID();
                std::cout << "Destination ID: ";
                for (const auto &byte : dest_id) {
                    printf("%02x ", byte);
                }
                std::cout << std::endl;
            }
        }

        rti::util::sleep(Duration(1));
    }
}

int main(int argc, char *argv[])
{
    // Parse arguments and handle control-C
    auto arguments = parse_arguments(argc, argv);
    if (arguments.parse_result == ParseReturn::exit) {
        return EXIT_SUCCESS;
    } else if (arguments.parse_result == ParseReturn::failure) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    // Sets Connext verbosity programatically to help debugging
    rti::config::Logger::instance().verbosity(arguments.verbosity);

    std::cout << "Logging Verbosity at: " << arguments.verbosity << std::endl;

    // Set the debug output to a specific file
    // rti::config::Logger::instance().output_file("debug_output.log");

    // Log a debug message to verify - Needs to be at Level 5 Verbosity
    rti::config::Logger::instance().debug(
            "This is a debug message logged to the file.");

    try {
        run(arguments);
    } catch (const std::exception &ex) {
        // All DDS exceptions inherit from std::exception
        std::cerr << "Exception in run): " << ex.what() << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application shutdown
    DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
