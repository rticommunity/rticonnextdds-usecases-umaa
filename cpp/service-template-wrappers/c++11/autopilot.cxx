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

// Callback functions for handling incoming data
void on_speed_report(const rti::sub::LoanedSample<SpeedReportType> &sample)
{
    if (sample.info().valid()) {
        // Optional, so check first
        if (sample.data().speedThroughWater().has_value()) {
            auto current_speed = sample.data().speedThroughWater().value();
            std::cout << "SPEED : " << current_speed << std::endl;
        }
    }
}

void on_velocity_report(const rti::sub::LoanedSample<VelocityReportType> &sample)
{
    if (sample.info().valid()) {
        std::cout << "EAST SPEED: " << sample.data().velocity().eastSpeed() << std::endl;
        std::cout << "NORTH SPEED: " << sample.data().velocity().northSpeed() << std::endl;
    }
}

void on_globalpose_report(const rti::sub::LoanedSample<GlobalPoseReportType> &sample)
{
    if (sample.info().valid()) {
        std::cout << "LAT: " << sample.data().position().geodeticLatitude() << std::endl;
        std::cout << "LON: " << sample.data().position().geodeticLongitude() << std::endl;
    }
}

void on_globalvector_command(const rti::sub::LoanedSample<GlobalVectorCommandType> &sample)
{
    if (sample.info().valid()) {
        std::cout << "\n\n"
                     "_________________________________________________\n"
                     "Received Global Vector Command:\n"
                     "_________________________________________________\n";
        std::cout << "Instance Handle: " << sample.info().instance_handle() << std::endl;
        std::cout << "State: " << sample.info().state().instance_state() << std::endl;
        
        if (sample.info().state().instance_state() == InstanceState::alive()) {
            std::cout << "Current Water Speed Command: "
                      << sample.data()
                                 .speed()
                                 .SpeedRequirementVariantTypeSubtypes()
                                 .WaterSpeedRequirementVariantVariant()
                                 .speed()
                                 .speed()
                      << std::endl;
        }
    }
}

void run(ApplicationArguments args)
{
    // Note: Error handling ommitted for API example clarity

    // Initialize the DDSUMAAParticipant before using it
    // Light wrapper class around the DDS Participant to include some extra
    // metadata
    auto dp = std::make_shared<DDSUMAAParticipant>(args.domain_id);

    // Create Service Classes with callbacks (async waitset enabled automatically)
    GlobalVectorControlServiceProvider globalvector_command_provider(
            dp,
            on_globalvector_command);

    SpeedReportServiceConsumer speed_status_consumer(
            dp,
            on_speed_report);

    VelocityReportServiceConsumer velocity_status_consumer(
            dp,
            on_velocity_report);

    GlobalPoseReportServiceConsumer globalpose_status_consumer(
            dp,
            on_globalpose_report);

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

        // Data is processed asynchronously via callbacks above
        // This loop just maintains the health report

        rti::util::sleep(Duration(1));
    }
}int main(int argc, char *argv[])
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
