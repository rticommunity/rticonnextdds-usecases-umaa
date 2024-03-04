/*
 * (c) Copyright, Real-Time Innovations, 2020.  All rights reserved.
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

// Include generated headers for Compiled Types
#include "../build/src/UMAA/EO/AnchorControl/AnchorCommandType.hpp"
#include "../build/src/UMAA/EO/AnchorStatus/AnchorReportType.hpp"
#include "../build/src/UMAA/EO/AnchorControl/AnchorCommandStatusType.hpp"

#include "application.hpp"               // Argument parsing
#include "../build/src/umaa_consts.hpp"  // Consts for UMAA entities

using namespace application;
using namespace UMAA::EO::AnchorControl;
using namespace UMAA::EO::AnchorStatus;
using namespace UMAA::Common::MaritimeEnumeration;

// Include all rti namespaces. Done for easier legibility.
using namespace rti::all;

auto anchor_cmd = AnchorActionEnumModule::AnchorActionEnumType::STOP;
auto anchor_cmd_status =
        CommandStatusEnumModule::CommandStatusEnumType::COMPLETED;
auto anchor_state = AnchorStateEnumModule::AnchorStateEnumType::STOWED;

class AnchorCommandListener : public NoOpDataReaderListener<AnchorCommandType> {
    virtual void on_data_available(DataReader<AnchorCommandType> &reader)
    {
        LoanedSamples<AnchorCommandType> samples = reader.take();
        for (const auto &sample : samples) {
            // If the reference we get is valid data, it means we have actual
            // data available, otherwise we got metadata.
            if (sample.info().valid()) {
                // std::cout << "Received Command: " << sample.data().action()
                // << std::endl;
                anchor_cmd = sample.data().action();
                anchor_cmd_status = CommandStatusEnumModule::
                        CommandStatusEnumType::COMMANDED;


            } else {
                // std::cout << "  Got metadata" << std::endl;
            }
        }
    }
};

void run_example(unsigned int domain_id, unsigned int sample_count)
{
    // Register the compiled types
    register_type<AnchorCommandType>("AnchorCommandType");
    register_type<AnchorCommandStatusType>("AnchorCommandStatusType");
    register_type<AnchorReportType>("AnchorReportType");

    // We're going to configure the default QoS Provider to load our own xml
    // and to ignore the NDDS_QOS_PROFILES environment variable and the file
    // USER_QOS_PROFILES.xml
    // Reference:
    // https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/api/connext_dds/api_cpp2/classdds_1_1core_1_1QosProvider.html#DefaultQosProvider
    // This allows us to control Logging through XML as needed
    QosProviderParams params;
    params.url_profile({ UMAA_COMPONENTS });
    params.ignore_environment_profile(true);
    params.ignore_user_profile(true);


    // To ensure that the new configuration takes effect before any other
    // profiles are loaded, set the new parameters before accessing
    // QosProvider::Default().
    default_qos_provider_params(params);


    // Create the QOS provider from the default.
    auto qos_provider = QosProvider::Default();


    // Create the participant as defined in the xml file.  This instantiates the
    // participant, registers the types, and creates the child publisher,
    // subscriber, reader and writer.
    DomainParticipant participant =
            qos_provider->create_participant_from_config(ANCHORCONTROLLER);


    // Lookup the readers
    auto anchor_command_reader =
            find_datareader_by_name<DataReader<AnchorCommandType>>(
                    participant,
                    ANCHORCOMMANDREADER);

    // Lookup the writers
    auto anchor_command_status_writer =
            find_datawriter_by_name<DataWriter<AnchorCommandStatusType>>(
                    participant,
                    ANCHORCOMMANDSTATUSWRITER);
    auto anchor_report_writer =
            find_datawriter_by_name<DataWriter<AnchorReportType>>(
                    participant,
                    ANCHORREPORTWRITER);


    // Add listeners to our readers
    auto anchor_command_listener = std::make_shared<AnchorCommandListener>();
    anchor_command_reader.set_listener(anchor_command_listener);

    // Create some samples to write
    AnchorCommandStatusType anchor_command_sample;
    AnchorReportType anchor_report_sample;


    int rope_length = 0;
    string anchor_state_string;
    while (!shutdown_requested) {
        switch (anchor_state) {
        case AnchorStateEnumModule::AnchorStateEnumType::STOWED:
            if (anchor_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::LOWER) {
                anchor_state =
                        AnchorStateEnumModule::AnchorStateEnumType::LOWERING;
                break;
            }
            anchor_cmd_status =
                    CommandStatusEnumModule::CommandStatusEnumType::COMPLETED;
            anchor_state_string = "ANCHOR STOWED";
            break;
        case AnchorStateEnumModule::AnchorStateEnumType::LOWERING:
            if (anchor_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::STOP) {
                anchor_state =
                        AnchorStateEnumModule::AnchorStateEnumType::STOPPED;
                break;
            }
            if (anchor_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::RAISE) {
                anchor_state =
                        AnchorStateEnumModule::AnchorStateEnumType::RAISING;
                break;
            }
            if (rope_length == 20) {
                anchor_state =
                        AnchorStateEnumModule::AnchorStateEnumType::DEPLOYED;
                break;
            }
            anchor_state_string = "LOWERING ANCHOR";
            rope_length++;
            break;
        case AnchorStateEnumModule::AnchorStateEnumType::DEPLOYED:
            if (anchor_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::RAISE) {
                anchor_state =
                        AnchorStateEnumModule::AnchorStateEnumType::RAISING;
                break;
            }
            anchor_cmd_status =
                    CommandStatusEnumModule::CommandStatusEnumType::COMPLETED;
            anchor_state_string = "ANCHOR DEPLOYED";
            break;
        case AnchorStateEnumModule::AnchorStateEnumType::STOPPED:
            if (anchor_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::RAISE) {
                anchor_state =
                        AnchorStateEnumModule::AnchorStateEnumType::RAISING;
                break;
            }
            if (anchor_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::LOWER) {
                anchor_state =
                        AnchorStateEnumModule::AnchorStateEnumType::LOWERING;
                break;
            }
            anchor_state_string = "ANCHOR STOPPED";
            break;
        case AnchorStateEnumModule::AnchorStateEnumType::RAISING:
            if (anchor_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::STOP) {
                anchor_state =
                        AnchorStateEnumModule::AnchorStateEnumType::STOPPED;
                break;
            }
            if (anchor_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::LOWER) {
                anchor_state =
                        AnchorStateEnumModule::AnchorStateEnumType::LOWERING;
                break;
            }
            if (rope_length == 0) {
                anchor_state =
                        AnchorStateEnumModule::AnchorStateEnumType::STOWED;
                break;
            }
            anchor_state_string = "RAISING ANCHOR";
            rope_length--;
            break;
        }

        // Write out statuses
        anchor_command_sample.commandStatus(anchor_cmd_status);
        anchor_command_status_writer.write(anchor_command_sample);

        anchor_report_sample.ropeLengthPaidOut(rope_length);
        anchor_report_writer.write(anchor_report_sample);


        // Print out
        std::cout << "\033[0m------------------------------------------------"
                  << std::endl;
        std::cout << "ANCHOR PAYOUT: " << rope_length << "                   "
                  << std::endl;
        std::cout << "LAST COMMAND: " << anchor_cmd << std::endl;
        std::cout << "ANCHOR STATE: " << anchor_state << std::endl;
        std::cout << "\033[0m------------------------------------------------"
                  << std::endl;
        // Move back up
        std::cout << "\033[5A";

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

    // Sets Connext verbosity to help debugging
    Logger::instance().verbosity(arguments.verbosity);

    try {
        run_example(arguments.domain_id, arguments.sample_count);
    } catch (const std::exception &ex) {
        // All DDS exceptions inherit from std::exception
        std::cerr << "Exception in run_example(): " << ex.what() << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application shutdown
    DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
