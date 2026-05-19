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

cmake_minimum_required(VERSION 3.14)
project(umaa_sdk CXX)

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

# Require C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# umaa_types target should already exist from parent build
if(NOT TARGET umaa_types)
    message(FATAL_ERROR "umaa_types target not found - build from repository root")
endif()

# ── SDK library ──────────────────────────────────────────────────────────────

add_library(umaa_sdk STATIC
    src/dds_context.cpp
    src/base_service.cpp
    src/base_component.cpp
    src/command_state_machine.cpp
)

target_include_directories(umaa_sdk
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(umaa_sdk
    PUBLIC
        RTIConnextDDS::cpp2_api
        umaa_types
)

target_compile_features(umaa_sdk PUBLIC cxx_std_17)

# ── Tests ────────────────────────────────────────────────────────────────────

add_executable(umaa_sdk_tests
    tests/main.cpp
    tests/test_guid_util.cpp
    tests/test_timestamp.cpp
    tests/test_dds_context.cpp
    tests/test_report_services.cpp
)

target_link_libraries(umaa_sdk_tests
    PRIVATE
        umaa_sdk
)

target_include_directories(umaa_sdk_tests
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/tests
)

# Enable running tests via CTest
enable_testing()
add_test(NAME umaa_sdk_tests COMMAND umaa_sdk_tests)
