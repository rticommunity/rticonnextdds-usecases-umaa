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

#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>  // for sleep()
#include <rti/config/Logger.hpp>  // for logging
// Or simply include <dds/dds.hpp> 

#include "application.hpp"  // Argument parsing
#include "umaa_sa_consts.hpp"
#include "UMAA/SA/CTDStatus/CTDReportType.hpp" // Include header for Compiled Type

using namespace application;
using namespace dds::core::xtypes;

void run_example(unsigned int domain_id, unsigned int sample_count)
{

    //--------------------------COMPILED TYPES REGISTRATION---------------------------------------//
    // By registering the type here we will use the compiled type instead of DynamicData
    // Make sure to register the type first before creating the participant
    // Connext will automatically see if a compiled type has been registered for use before 
    // looking up a Dynamic Data type reference in xml
    rti::domain::register_type<UMAA::SA::CTDStatus::CTDReportType>("CTDReportType");

    //-------------------------- END COMPILED TYPES REGISTRATION-----------------------------------//


    // We're going to configure the default QoS Provider to load our own xml
    // and to ignore the NDDS_QOS_PROFILES environment variable and the file
    // USER_QOS_PROFILES.xml
    // Reference https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/api/connext_dds/api_cpp2/classdds_1_1core_1_1QosProvider.html#DefaultQosProvider
    // This allows us to control Logging through XML as needed
    rti::core::QosProviderParams params;
    params.url_profile({ SA_XML_FILE });
    params.ignore_environment_profile(true);
    params.ignore_user_profile(true);

    // To ensure that the new configuration takes effect before any other
    // profiles are loaded, set the new parameters before accessing
    // QosProvider::Default().
    rti::core::default_qos_provider_params(params);

    //Create the QOS provider from the default.
    auto qos_provider = dds::core::QosProvider::Default();


    // Create the participant as defined in the xml file.  This instantiates the
    // participant registers the types, and creates the child publisher,
    // subscriber, reader and writer.
    dds::domain::DomainParticipant participant =
            qos_provider->create_participant_from_config(SA_PROVIDER);


    //--------------------------START COMPILED TYPES USAGE-------------------------------------//
    // Lookup the DataWriter
    dds::pub::DataWriter<UMAA::SA::CTDStatus::CTDReportType> ctd_report_writer =
            rti::pub::find_datawriter_by_name<
                    dds::pub::DataWriter<UMAA::SA::CTDStatus::CTDReportType>>(
                    participant,
                    CTDREPORTWRITER);

    // Enable the writer
    ctd_report_writer.enable();

           
    //Create data ctd_report_sample for writing
    UMAA::SA::CTDStatus::CTDReportType ctd_report_sample;
    UMAA::Common::Measurement::NumericGUID source_id;
    source_id.fill(5);
    //--------------------------END COMPILED TYPES USAGE---------------------------------------//




    //--------------------------START DYNAMIC TYPES USAGE---------------------------------------//
    // There is a slight performance impact when using Dynamic Types vs Compiled types.

    // Lookup type as defined in the xml file and dynamically create.
    const DynamicType &speed_report_type = qos_provider->type(SPEEDREPORTTYPE);


    // // Find the DataWriter defined in the xml
    dds::pub::DataWriter<DynamicData> speed_report_writer =
            rti::pub::find_datawriter_by_name<
                    dds::pub::DataWriter<DynamicData>>(
                    participant,
                    SPEEDREPORTWRITER);

    // Enable writer                
    speed_report_writer.enable();

    // Create a data sample
    DynamicData speed_report_sample(speed_report_type);
 
    //--------------------------END DYNAMIC TYPES USAGE------------------------------------------//

    int rand;
    int counter = 0;
    while (!shutdown_requested) {
            
            try
            {
                rand = std::rand() %5;

                // Fill and Write CTD Report Sample
                ctd_report_sample.conductivity(28 + rand);
                ctd_report_sample.depth(counter);
                ctd_report_sample.source(source_id);
                ctd_report_writer.write(ctd_report_sample);

                printf ("Publishing CTD conductivity : %.2f \n", ctd_report_sample.conductivity());
                printf ("Publishing CTD depth: %.2f \n", ctd_report_sample.depth());

                // Fill and write Speed Report
                speed_report_sample.value("speedThroughWater", 0.2 + rand);
                speed_report_writer.write(speed_report_sample);
                printf("Publishing Vehicle Speed: %.2f \n", speed_report_sample.value<double>("speedThroughWater"));
                
                // increment
                counter++;
                if (counter >= 100)
                {
                    counter = 0;
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }


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

    // Sets Connext verbosity through cmd level to help debugging
    rti::config::Logger::instance().verbosity(arguments.verbosity);


    try {
        run_example(arguments.domain_id, arguments.sample_count);
    } catch (const std::exception& ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_example(): " << ex.what()
                  << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application shutdown
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
