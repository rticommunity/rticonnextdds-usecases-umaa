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

#include <algorithm>
#include <iostream>

#include <rti/rti.hpp>  // include all base plus extensions

// Include generated headers for Compiled Types
#include "UMAA/EO/AnchorControl/AnchorCommandType.hpp"
#include "UMAA/EO/AnchorStatus/AnchorReportType.hpp"
#include "UMAA/EO/AnchorControl/AnchorCommandStatusType.hpp"

#include "application.hpp"  // Argument parsing
#include "umaa_consts.hpp"  // Consts for UMAA entities

using namespace application;
using namespace UMAA::EO::AnchorControl;
using namespace UMAA::EO::AnchorStatus;
using namespace UMAA::Common::MaritimeEnumeration;

// Include all rti namespaces. Done for easier legibility.
using namespace rti::all;


struct AnchorState {
    AnchorActionEnumModule::AnchorActionEnumType current_cmd =
            AnchorActionEnumModule::AnchorActionEnumType::STOP;

    CommandStatusEnumModule::CommandStatusEnumType current_cmd_status =
            CommandStatusEnumModule::CommandStatusEnumType::COMPLETED;

    AnchorStateEnumModule::AnchorStateEnumType position =
            AnchorStateEnumModule::AnchorStateEnumType::STOWED;

    int rope_length = 0;

    std::string status_string = "";
};


class AnchorCommandListener : public NoOpDataReaderListener<AnchorCommandType> {
    
    AnchorState &anchor_state;

     public:
        AnchorCommandListener(AnchorState &anchor_state_)
                : anchor_state(anchor_state_)
        {
        }

    virtual void on_data_available(DataReader<AnchorCommandType> &reader)
    {
        LoanedSamples<AnchorCommandType> samples = reader.take();
        for (const auto &sample : samples) {
            // If the reference we get is valid data, it means we have actual
            // data available, otherwise we got metadata.
            if (sample.info().valid()) {
                // std::cout << "Received Command: " << sample.data().action()
                // << std::endl;
                anchor_state.current_cmd = sample.data().action();
                anchor_state.current_cmd_status = CommandStatusEnumModule::
                        CommandStatusEnumType::COMMANDED;
            }
        }
    }
};

void run_example(unsigned int domain_id, std::string config)
{
    AnchorState anchor_state;

    // Register the compiled types
    register_type<AnchorCommandType>("AnchorCommandType");
    register_type<AnchorCommandStatusType>("AnchorCommandStatusType");
    register_type<AnchorReportType>("AnchorReportType");

    // This allows us to control Logging through XML as needed
    QosProviderParams params;
    params.url_profile({ config });
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
    auto anchor_command_listener =
            std::make_shared<AnchorCommandListener>(anchor_state);
    anchor_command_reader.set_listener(anchor_command_listener);

    // Create some samples to write
    AnchorCommandStatusType anchor_command_sample;
    AnchorReportType anchor_report_sample;


    while (!shutdown_requested) {
        switch (anchor_state.position) {
        case AnchorStateEnumModule::AnchorStateEnumType::STOWED:
            if (anchor_state.current_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::LOWER) {
                anchor_state.position =
                        AnchorStateEnumModule::AnchorStateEnumType::LOWERING;
            } else {
                anchor_state.current_cmd_status = CommandStatusEnumModule::
                        CommandStatusEnumType::COMPLETED;
                anchor_state.status_string = "ANCHOR STOWED";
            }
            break;
        case AnchorStateEnumModule::AnchorStateEnumType::LOWERING:
            if (anchor_state.current_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::STOP) {
                anchor_state.position =
                        AnchorStateEnumModule::AnchorStateEnumType::STOPPED;
            } else if (
                    anchor_state.current_cmd
                    == AnchorActionEnumModule::AnchorActionEnumType::RAISE) {
                anchor_state.position =
                        AnchorStateEnumModule::AnchorStateEnumType::RAISING;
            } else if (anchor_state.rope_length == 20) {
                anchor_state.position =
                        AnchorStateEnumModule::AnchorStateEnumType::DEPLOYED;
            } else {
                anchor_state.status_string = "LOWERING ANCHOR";
                anchor_state.rope_length++;
            }
            break;
        case AnchorStateEnumModule::AnchorStateEnumType::DEPLOYED:
            if (anchor_state.current_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::RAISE) {
                anchor_state.position =
                        AnchorStateEnumModule::AnchorStateEnumType::RAISING;
            } else {
                anchor_state.current_cmd_status = CommandStatusEnumModule::
                        CommandStatusEnumType::COMPLETED;
                anchor_state.status_string = "ANCHOR DEPLOYED";
            }
            break;
        case AnchorStateEnumModule::AnchorStateEnumType::STOPPED:
            if (anchor_state.current_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::RAISE) {
                anchor_state.position =
                        AnchorStateEnumModule::AnchorStateEnumType::RAISING;
            } else if (
                    anchor_state.current_cmd
                    == AnchorActionEnumModule::AnchorActionEnumType::LOWER) {
                anchor_state.position =
                        AnchorStateEnumModule::AnchorStateEnumType::LOWERING;
            } else {
                anchor_state.status_string = "ANCHOR STOPPED";
            }
            break;
        case AnchorStateEnumModule::AnchorStateEnumType::RAISING:
            if (anchor_state.current_cmd
                == AnchorActionEnumModule::AnchorActionEnumType::STOP) {
                anchor_state.position =
                        AnchorStateEnumModule::AnchorStateEnumType::STOPPED;
            } else if (
                    anchor_state.current_cmd
                    == AnchorActionEnumModule::AnchorActionEnumType::LOWER) {
                anchor_state.position =
                        AnchorStateEnumModule::AnchorStateEnumType::LOWERING;
            } else if (anchor_state.rope_length == 0) {
                anchor_state.position =
                        AnchorStateEnumModule::AnchorStateEnumType::STOWED;
            } else {
                anchor_state.status_string = "RAISING ANCHOR";
                anchor_state.rope_length--;
            }
            break;
        }

        // Write out statuses
        anchor_command_sample.commandStatus(anchor_state.current_cmd_status);
        anchor_command_status_writer.write(anchor_command_sample);

        anchor_report_sample.ropeLengthPaidOut(anchor_state.rope_length);
        anchor_report_sample.state(anchor_state.position);
        anchor_report_writer.write(anchor_report_sample);


        // Print out
        std::cout << "\033[0m------------------------------------------------"
                  << std::endl;
        std::cout << "ANCHOR PAYOUT: " << anchor_state.rope_length
                  << "                   " << std::endl;
        std::cout << "LAST COMMAND: " << anchor_state.current_cmd << std::endl;
        std::cout << "ANCHOR STATE: " << anchor_state.status_string
                  << std::endl;
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
        run_example(arguments.domain_id, arguments.config);
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
