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

#ifdef UMAA_LEGACY_GENERATED_MEMBER_API
#define UMAA_GET(instance, member) ((instance).member)
#define UMAA_SET(instance, member, value) ((instance).member = (value))
#else
#define UMAA_GET(instance, member) ((instance).member())
#define UMAA_SET(instance, member, value) ((instance).member(value))
#endif

// Callback functions for handling incoming data
void on_speed_report(const rti::sub::LoanedSample<SpeedReportType> &sample)
{
    if (sample.info().valid()) {
        // Optional, so check first
        if (UMAA_GET(sample.data(), speedThroughWater).has_value()) {
            auto current_speed = UMAA_GET(sample.data(), speedThroughWater).value();
            std::cout << "SPEED: " << current_speed << std::endl;
        }
    }
}

void on_globalpose_report(const rti::sub::LoanedSample<GlobalPoseReportType> &sample)
{
    if (sample.info().valid()) {
        std::cout << "LAT: " << UMAA_GET(UMAA_GET(sample.data(), position), geodeticLatitude) << std::endl;
        std::cout << "LON: " << UMAA_GET(UMAA_GET(sample.data(), position), geodeticLongitude) << std::endl;
    }
}

void on_velocity_report(const rti::sub::LoanedSample<VelocityReportType> &sample)
{
    if (sample.info().valid()) {
        std::cout << "EAST SPEED: " << UMAA_GET(UMAA_GET(sample.data(), velocity), eastSpeed) << std::endl;
        std::cout << "NORTH SPEED: " << UMAA_GET(UMAA_GET(sample.data(), velocity), northSpeed) << std::endl;
    }
}

void on_globalvector_command(const rti::sub::LoanedSample<GlobalVectorCommandType> &sample)
{
    if (sample.info().valid()) {
        std::cout << "\n_________________________________________________\n"
                  << "Active Global Vector Command:\n"
                  << "_________________________________________________\n";

        std::cout << "Instance Handle: " << sample.info().instance_handle() << std::endl;
        std::cout << "State: " << sample.info().state().instance_state() << std::endl;

        if (sample.info().state().instance_state() == InstanceState::alive()) {
            const auto &speed_requirement = UMAA_GET(sample.data(), speed);
            const auto &speed_subtypes = UMAA_GET(
                    speed_requirement,
                    SpeedRequirementVariantTypeSubtypes);
                const auto &water_speed_requirement =
                    speed_subtypes.WaterSpeedRequirementVariantVariant();
            const auto &water_speed = UMAA_GET(water_speed_requirement, speed);
            std::cout << "Current Water Speed Command: "
                      << UMAA_GET(water_speed, speed)
                      << std::endl;

            // Print Session ID
            auto session_id = UMAA_GET(sample.data(), sessionID);
            std::cout << "Session ID: ";
            for (const auto &byte : session_id) {
                printf("%02x ", byte);
            }
            std::cout << std::endl;

            // Print Destination ID
            auto dest_id = UMAA_GET(UMAA_GET(sample.data(), destination), parentID);
            std::cout << "Destination ID: ";
            for (const auto &byte : dest_id) {
                printf("%02x ", byte);
            }
            std::cout << std::endl;
        }
    }
}

void run(ApplicationArguments args)
{
    // Setup Autopilot DDS Component with callbacks
    DDSUMAAParticipant ap(
            args.threads,
            on_speed_report,
            on_globalpose_report,
            on_velocity_report,
            on_globalvector_command);
    ap.create();

    // Create samples and get writers before loop
    HealthReportType sample;
    auto healthreport_writer = ap.get_health_report_writer();

    std::cout << "Entering Run loop - all data processed via callbacks\n";

    while (!shutdown_requested) {
        // Write a Health Report Status out
        std::string status_str = "Healthy";
        UMAA_SET(sample, status, status_str);
        healthreport_writer.write(sample);

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

#undef UMAA_GET
#undef UMAA_SET
