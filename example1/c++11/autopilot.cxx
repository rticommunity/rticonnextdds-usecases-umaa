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
#include "dds_umaa_participant.hpp"

using namespace application;

// Include all rti namespaces. Done for easier example legibility.
using namespace rti::all;

void run(ApplicationArguments args)
{
    // Setup Autopilot DDS Component
    DDSUMAAParticipant ap(args.threads);
    ap.create();

    // Create samples and get writers before loop
    HealthReportType sample;
    auto healthreport_writer = ap.get_health_report_writer();

    std::cout << "Entering Run loop \n";

    while (!shutdown_requested) {
        // Write a Health Report Status out
        std::string status_str = "Healthy";
        sample.status(status_str);
        healthreport_writer.write(sample);
        // std::cout << "Sending Health Report/Waiting for data\n";

        std::cout << "\n\n_____________________________________________________"
                     "_______________\n"
                  << "Telemetry Reports:\n"
                  << "_________________________________________________________"
                     "___________\n";

        // Optional, so check first
        if (ap.get_speed_report_data().speedThroughWater().has_value()) {
            auto current_speed =
                    ap.get_speed_report_data().speedThroughWater().value();
            std::cout << "SPEED : " << current_speed << std::endl;
        }

        std::cout << "LAT: "
                  << ap.get_globalpose_report_data().position().geodeticLatitude()
                  << std::endl;
        std::cout << "LON: "
                  << ap.get_globalpose_report_data().position().geodeticLongitude()
                  << std::endl;

        std::cout << "EAST SPEED: "
                  << ap.get_velocity_report_data().velocity().eastSpeed()
                  << std::endl;
        std::cout << "NORTH SPEED: "
                  << ap.get_velocity_report_data().velocity().northSpeed()
                  << std::endl;


        /** This is just a reference for accessing Instance Sample Data values.
         *  For UMAA Flow Control there would be more involved such as changing
         *  the Active Instances Command States etc.
         *  Currently out of scope for this example.
         **/
        auto globalvector_command_active_instance =
                ap.get_active_globalvector_command_instance();

        if (globalvector_command_active_instance != dds::core::null) {
            auto active_globalvector_command =
                    ap.get_active_globalvector_command();

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

                ap.get_globalvector_cmd_reader().key_value(
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

    // Set the debug output to a specific file
    //  rti::config::Logger::instance().output_file("debug_output.log");

    // Log a debug message to verify - Needs to be at Level 5 Verbosity
    rti::config::Logger::instance().debug(
            "This is a debug message logged to the file.");

    try {
        run(arguments);
    } catch (const std::exception &ex) {
        // All DDS exceptions inherit from std::exception
        std::cerr << "Exception in run: " << ex.what() << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application shutdown
    DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
