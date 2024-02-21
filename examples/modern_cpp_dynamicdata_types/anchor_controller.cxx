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

#include <dds/sub/ddssub.hpp>
#include <dds/pub/ddspub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp>  // for logging
#include <rti/util/util.hpp>      // for sleep()


// Include header for Compiled Type
#include "../../types/idl/UMAA/EO/AnchorControl/AnchorCommandType.hpp"
#include "../../types/idl/UMAA/EO/AnchorStatus/AnchorReportType.hpp"
#include "../../types/idl/UMAA/EO/AnchorControl/AnchorCommandStatusType.hpp"
#include "../../types/idl/UMAA/SA/SpeedStatus/SpeedReportType.hpp"

#include "application.hpp"  // Argument parsing
#include "umaa_consts.hpp"  // UMAA consts

using namespace application;
using namespace dds::core::xtypes;
using namespace UMAA::EO::AnchorControl;
using namespace UMAA::EO::AnchorStatus;
using namespace UMAA::SA::SpeedStatus;

class AnchorCommandListener
        : public dds::sub::NoOpDataReaderListener<AnchorCommandType> {
   
    virtual void on_data_available(dds::sub::DataReader<AnchorCommandType> &reader)
    {
        dds::sub::LoanedSamples<AnchorCommandType> samples = reader.take();
        for (const auto &sample : samples) {
            // If the reference we get is valid data, it means we have actual
            // data available, otherwise we got metadata.
            if (sample.info().valid()) {
                std::cout << sample.data() << std::endl;
            } else {
                std::cout << "  Got metadata" << std::endl;
            }
        }
    }
};

class SpeedReportListener
        : public dds::sub::NoOpDataReaderListener<SpeedReportType> {
   
    virtual void on_data_available(dds::sub::DataReader<SpeedReportType> &reader)
    {
        dds::sub::LoanedSamples<SpeedReportType> samples = reader.take();
        for (const auto &sample : samples) {
            // If the reference we get is valid data, it means we have actual
            // data available, otherwise we got metadata.
            if (sample.info().valid()) {
                std::cout << sample.data() << std::endl;
            } else {
                std::cout << "  Got metadata" << std::endl;
            }
        }
    }
};



// class SpeedReportListener
//         : public dds::sub::NoOpDataReaderListener<SpeedReportType> {
   
//     virtual void on_data_available(dds::sub::DataReader<SpeedReportType> &reader)
//     {
//         dds::sub::LoanedSamples<SpeedReportType> samples = reader.take();
//         for (const auto &sample : samples) {
//             // If the reference we get is valid data, it means we have actual
//             // data available, otherwise we got metadata.
//             if (sample.info().valid()) {
//                 std::cout << sample.data() << std::endl;
//             } else {
//                 std::cout << "  Got metadata" << std::endl;
//             }
//         }
//     }
// };

void run_example(unsigned int domain_id, unsigned int sample_count)
{
    // Register the compiled types
    rti::domain::register_type<AnchorCommandType>("AnchorCommandType");
    rti::domain::register_type<AnchorCommandStatusType>("AnchorCommandStatusType");
    rti::domain::register_type<AnchorReportType>("AnchorReportType");
    rti::domain::register_type<SpeedReportType>("SpeedReportType");

    // We're going to configure the default QoS Provider to load our own xml
    // and to ignore the NDDS_QOS_PROFILES environment variable and the file
    // USER_QOS_PROFILES.xml
    // Reference:
    // https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/api/connext_dds/api_cpp2/classdds_1_1core_1_1QosProvider.html#DefaultQosProvider
    // This allows us to control Logging through XML as needed
    rti::core::QosProviderParams params;
    params.url_profile({ ENTITIES_XML_FILE });
    params.ignore_environment_profile(true);
    params.ignore_user_profile(true);


    // To ensure that the new configuration takes effect before any other
    // profiles are loaded, set the new parameters before accessing
    // QosProvider::Default().
    rti::core::default_qos_provider_params(params);


    // Create the QOS provider from the default.
    auto qos_provider = dds::core::QosProvider::Default();


    // Create the participant as defined in the xml file.  This instantiates the
    // participant, registers the types, and creates the child publisher,
    // subscriber, reader and writer.
    dds::domain::DomainParticipant participant =
            qos_provider->create_participant_from_config(ANCHORCONTROLLER);


    // Lookup the Readers
    dds::sub::DataReader<AnchorCommandType> anchor_command_reader =
            rti::sub::find_datareader_by_name<dds::sub::DataReader<AnchorCommandType>>(
                    participant,
                    ANCHORCOMMANDREADER);
    dds::sub::DataReader<SpeedReportType> speed_report_reader =
            rti::sub::find_datareader_by_name<dds::sub::DataReader<SpeedReportType>>(
                    participant,
                    SPEEDREPORTREADER);

    // Lookup the writers
    dds::pub::DataWriter<AnchorCommandStatusType> anchor_command_status_writer =
            rti::pub::find_datawriter_by_name<dds::pub::DataWriter<AnchorCommandStatusType>>(
                    participant,
                    ANCHORCOMMANDSTATUSWRITER);
    dds::pub::DataWriter<AnchorReportType> anchor_report_writer =
            rti::pub::find_datawriter_by_name<dds::pub::DataWriter<AnchorReportType>>(
                    participant,
                    ANCHORREPORTWRITER);
    

    // Add listeners to our readers
    auto anchor_command_listener = std::make_shared<AnchorCommandListener>();
    anchor_command_reader.set_listener(anchor_command_listener);

    auto speed_report_listener = std::make_shared<SpeedReportListener>();
    speed_report_reader.set_listener(speed_report_listener);


    // Create some samples to write
    AnchorCommandStatusType anchor_command_sample;
    AnchorReportType anchor_report_sample;


    while (!shutdown_requested) {

        anchor_command_sample.commandStatus(UMAA::Common::MaritimeEnumeration::CommandStatusEnumModule::CommandStatusEnumType::COMMANDED);
        anchor_command_status_writer.write(anchor_command_sample);

        anchor_report_sample.ropeLengthPaidOut(5);
        anchor_report_writer.write(anchor_report_sample);


        std::cout << "test" << std::endl;

        rti::util::sleep(dds::core::Duration(1));


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
    rti::config::Logger::instance().verbosity(arguments.verbosity);

    try {
        run_example(arguments.domain_id, arguments.sample_count);
    } catch (const std::exception &ex) {
        // All DDS exceptions inherit from std::exception
        std::cerr << "Exception in run_example(): " << ex.what() << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application shutdown
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
