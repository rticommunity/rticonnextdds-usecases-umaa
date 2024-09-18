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

#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <iostream>
#include <csignal>
#include <dds/core/ddscore.hpp>


namespace application {

// Catch control-C and tell application to shut down
bool shutdown_requested = false;

inline void stop_handler(int)
{
    shutdown_requested = true;
    std::cout << "preparing to shut down..." << std::endl;

}

inline void setup_signal_handlers()
{
    signal(SIGINT, stop_handler);
    signal(SIGTERM, stop_handler);
}

enum class ParseReturn {
    ok,
    failure,
    exit
};

struct ApplicationArguments {
    ParseReturn parse_result;
    unsigned int domain_id;
    std::string config;
    rti::config::Verbosity verbosity;
    int threads;
};

// Parses application arguments for example.
inline ApplicationArguments parse_arguments(int argc, char *argv[])
{
    int arg_processing = 1;
    bool show_usage = false;

    ApplicationArguments args;

    // Set defaults
    args.parse_result = ParseReturn::ok;
    args.verbosity = rti::config::Verbosity::EXCEPTION;
    args.threads = 5;

    while (arg_processing < argc) {
        if ((argc > arg_processing + 1)
                && (strcmp(argv[arg_processing], "-d") == 0
                || strcmp(argv[arg_processing], "--domain") == 0)) {
            args.domain_id = atoi(argv[arg_processing + 1]);
            arg_processing += 2;
        } else if ((argc > arg_processing + 1)
                && (strcmp(argv[arg_processing], "-v") == 0
                || strcmp(argv[arg_processing], "--verbosity") == 0)) {
            args.verbosity =
                    static_cast<rti::config::Verbosity::inner_enum>(
                            atoi(argv[arg_processing + 1]));
            arg_processing += 2;
        } else if ((argc > arg_processing + 1)
            && (strcmp(argv[arg_processing], "-t") == 0
                || strcmp(argv[arg_processing], "--threads") == 0)) {
            args.threads = atoi(argv[arg_processing + 1]);
            arg_processing += 2;
        } else if (
                strcmp(argv[arg_processing], "-h") == 0
                || strcmp(argv[arg_processing], "--help") == 0) {
            std::cout << "Example AutoPilot Application." << std::endl;
            show_usage = true;
            args.parse_result = ParseReturn::exit;
            break;
        } else {
            std::cout << "Bad parameter." << std::endl;
            show_usage = true;
            args.parse_result = ParseReturn::failure;
            break;
        }
    }
    if (show_usage) {
        std::cout << "Usage:\n"
                     "    -d, --domain     <int>     Domain ID \n "
                     "                               Default: 0 \n"
                     "    -v, --verbosity  <int>     Debug output \n"
                     "                               Range: 0-5 \n"
                     "                               Default: 0 \n"
                     "    -t, --threads  <int>       Threads for async waitset pool\n "
                     "                               Default: 5"
                  << std::endl;
    }

    return args;
}

}  // namespace application

#endif  // APPLICATION_HPP
