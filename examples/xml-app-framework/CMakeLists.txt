#
# (c) 2025 Copyright, Real-Time Innovations, Inc.  All rights reserved.
#
# RTI grants Licensee a license to use, modify, compile, and create derivative
# works of the Software.  Licensee has the right to distribute object form
# only for use with RTI products.  The Software is provided "as is", with no
# warranty of any type, including any warranty for fitness for any purpose.
# RTI is under no obligation to maintain or support the Software.  RTI shall
# not be liable for any incidental or consequential damages arising out of the
# use or inability to use the software.
#

cmake_minimum_required(VERSION 3.11)
project(umaa_xml_app)

# Check if this file is being run as the root project
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    get_filename_component(ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../.." ABSOLUTE)
    message(FATAL_ERROR 
        "========================================================================\n"
        "Error: This project cannot be built standalone.\n"
        "Please run CMake from the repository root directory.\n"
        "========================================================================\n"
        "Example:\n"
        "  cd ${ROOT_DIR}\n"
        "  mkdir -p build && cd build\n"
        "  cmake ..\n"
        "  make\n"
        "========================================================================"
    )
endif()

# Set Vars
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_STANDARD 11)

# umaa_types target should already exist from parent build
if(NOT TARGET umaa_types)
    message(FATAL_ERROR "umaa_types target not found - build from repository root")
endif()

# Create the target for the AutoPilot executable
add_executable(xml_app_autopilot
    "${CMAKE_CURRENT_SOURCE_DIR}/c++11/autopilot.cxx"
    "${CMAKE_CURRENT_SOURCE_DIR}/c++11/application.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/c++11/dds_umaa_participant.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/c++11/dds_umaa_participant.cxx"
)

target_link_libraries(xml_app_autopilot
    PRIVATE
        RTIConnextDDS::cpp2_api
        umaa_types
)
