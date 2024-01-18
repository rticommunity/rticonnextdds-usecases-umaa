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
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp>  // for logging


// Include header for Compiled Type
#include "UMAA/SA/CTDStatus/CTDReportType.hpp"  

#include "application.hpp"  // Argument parsing
#include "umaa_sa_consts.hpp"

using namespace application;
using namespace dds::core::xtypes;

unsigned int process_ctd_data(
        dds::sub::DataReader<UMAA::SA::CTDStatus::CTDReportType> &reader)
{
    // Take all samples.  Samples are loaned to application, loan is
    // returned when LoanedSamples destructor called.
    unsigned int samples_read = 0;
    dds::sub::LoanedSamples<UMAA::SA::CTDStatus::CTDReportType> samples =
            reader.take();
    for (const auto &sample : samples) {
        if (sample.info().valid()) {
            samples_read++;
            std::cout << sample.data() << std::endl;
        }
    }

    return samples_read;
}

unsigned int process_speed_data(dds::sub::DataReader<DynamicData> &reader)
{
    // Take all samples.  Samples are loaned to application, loan is
    // returned when LoanedSamples destructor called.
    unsigned int samples_read = 0;
    dds::sub::LoanedSamples<DynamicData> samples = reader.take();
    for (const auto &sample : samples) {
        if (sample.info().valid()) {
            samples_read++;
            std::cout << sample.data() << std::endl;
        }
    }

    return samples_read;
}

void run_example(unsigned int domain_id, unsigned int sample_count)
{
    // ----------------- BEGIN COMPILED TYPES REGISTRATION----------------------
    // By registering the type here we will use the compiled type instead of
    // DynamicData Make sure to register the type first before creating the
    // participant Connext will automatically see if a compiled type has been
    // registered for use before looking up a Dynamic Data type reference in xml
    rti::domain::register_type<UMAA::SA::CTDStatus::CTDReportType>(
            "CTDReportType");

    //------------------ END COMPILED TYPES REGISTRATION-----------------------


    // We're going to configure the default QoS Provider to load our own xml
    // and to ignore the NDDS_QOS_PROFILES environment variable and the file
    // USER_QOS_PROFILES.xml
    // Reference:
    // https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/api/connext_dds/api_cpp2/classdds_1_1core_1_1QosProvider.html#DefaultQosProvider
    // This allows us to control Logging through XML as needed
    rti::core::QosProviderParams params;
    params.url_profile({ SA_XML_FILE });
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
            qos_provider->create_participant_from_config(SA_USER);


    //--------------------START COMPILED TYPES USAGE----------------------------
    // Lookup the DataReader
    dds::sub::DataReader<UMAA::SA::CTDStatus::CTDReportType> ctd_report_reader =
            rti::sub::find_datareader_by_name<
                    dds::sub::DataReader<UMAA::SA::CTDStatus::CTDReportType>>(
                    participant,
                    CTDREPORTREADER);

    // Enable the reader
    ctd_report_reader.enable();

    // Obtain the DataReader's Status Condition
    dds::core::cond::StatusCondition ctd_status_condition(ctd_report_reader);

    // Enable the 'data available' status.
    ctd_status_condition.enabled_statuses(
            dds::core::status::StatusMask::data_available());

    // Associate a handler with the status condition. This will run when the
    // condition is triggered, in the context of the dispatch call (see below)
    unsigned int samples_read = 0;
    ctd_status_condition.extensions().handler(
            [&ctd_report_reader, &samples_read]() {
                samples_read += process_ctd_data(ctd_report_reader);
            });
    //--------------------END COMPILED TYPES USAGE------------------------------


    //-------------------START DYNAMIC TYPES USAGE------------------------------
    // There is a slight performance impact when using Dynamic Types vs Compiled
    // types.

    // Find the DataWriter defined in the xml
    dds::sub::DataReader<DynamicData> speed_report_reader =
            rti::sub::find_datareader_by_name<
                    dds::sub::DataReader<DynamicData>>(
                    participant,
                    SPEEDREPORTREADER);

    // Enable writer
    speed_report_reader.enable();

    // Obtain the DataReader's Status Condition
    dds::core::cond::StatusCondition speed_status_condition(
            speed_report_reader);

    // Enable the 'data available' status.
    speed_status_condition.enabled_statuses(
            dds::core::status::StatusMask::data_available());

    // Associate a handler with the status condition. This will run when the
    // condition is triggered, in the context of the dispatch call (see below)
    speed_status_condition.extensions().handler(
            [&speed_report_reader, &samples_read]() {
                samples_read += process_speed_data(speed_report_reader);
            });

    //------------------END DYNAMIC TYPES USAGE---------------------------------


    // Create a WaitSet and attach the StatusConditions
    dds::core::cond::WaitSet waitset;
    waitset += ctd_status_condition;
    waitset += speed_status_condition;

    while (!shutdown_requested && samples_read < sample_count) {
        // Dispatch will call the handlers associated to the WaitSet conditions
        // when they activate
        std::cout << "SA USER sleeping for 4 sec..." << std::endl;

        waitset.dispatch(dds::core::Duration(4));  // Wait up to 4s each time
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
