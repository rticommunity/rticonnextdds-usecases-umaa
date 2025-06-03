#
# (c) 2024 Copyright, Real-Time Innovations, Inc.  All rights reserved.
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
project(umaa_case_code)

# Add folder where FindRTIConnextDDS.cmake file is to CMAKE_MODULE_PATH
get_filename_component(REPO ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)

list(APPEND CMAKE_MODULE_PATH
    "${REPO}/rticonnextdds-cmake-utils/cmake/Modules"
)


# Set Vars
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(BUILD_SHARED_LIBS ON)
set (_UMAA_TYPES) # Holds UMAA IDL files
set (_UMAA_CPP11_GENERATED) # Holds UMAA cpp generated files
set (_UMAA_IDL_FOLDER "${REPO}/datamodel/umaa/idl/")
set (_UMAA_CPP11_FOLDER "${REPO}/datamodel/umaa/cpp11_gen")
set (LIBRARY_OUTPUT_DIRECTORY "${REPO}/resources/lib")
set (CMAKE_CXX_STANDARD 11)


include(ConnextDdsCodegen)

# This will look for the ConnextDDS core and API libraries
find_package(RTIConnextDDS
    "6.1.2"
    REQUIRED
    COMPONENTS
        core
)

# Add target to run codegen on idl files for cpp11
if(NOT TARGET gen_cpp11_umaa_types)
add_custom_target(gen_cpp11_umaa_types ALL)
endif()

# Add all UMAA IDL files to list
file(GLOB_RECURSE _UMAA_TYPES RELATIVE ${_UMAA_IDL_FOLDER} ${_UMAA_IDL_FOLDER}*.idl)

foreach(_idl IN LISTS _UMAA_TYPES)
    # Maintain folder structure on output so includes work
    string(CONCAT _idl_PATH ${_UMAA_IDL_FOLDER} ${_idl})
    get_filename_component(_idl_FOLDER ${_idl} DIRECTORY)
    get_filename_component(_idl_NAME ${_idl} NAME)

    # call rtiddsgen on the IDL files
    connextdds_rtiddsgen_run(
        IDL_FILE ${_idl_PATH}
        OUTPUT_DIRECTORY
            "${_UMAA_CPP11_FOLDER}/${_idl_FOLDER}"
        INCLUDE_DIRS "${_UMAA_IDL_FOLDER}"
        LANG "C++11"
        VAR "UMAA_TYPES"
    )
    # add generated files to list
    list(APPEND _UMAA_CPP11_GENERATED ${UMAA_TYPES_CXX11_SOURCES})

    # create target per idl
    add_custom_target(${_idl_NAME}
        DEPENDS ${UMAA_TYPES_CXX11_SOURCES})
    add_dependencies(gen_cpp11_umaa_types ${_idl_NAME})
endforeach()

# Try to find a pre-built umaa_cpp11_types library first
find_library(UMAA_CPP11_TYPES_LIB
    NAMES umaa_cpp11_types
    PATHS ${LIBRARY_OUTPUT_DIRECTORY}
)

## Create shared library for UMAA Types
add_library(umaa_cpp11_types SHARED
    ${_UMAA_CPP11_GENERATED}
)
target_link_libraries(umaa_cpp11_types RTIConnextDDS::cpp2_api)
target_include_directories(umaa_cpp11_types PUBLIC 
    "$<BUILD_INTERFACE:${_UMAA_CPP11_FOLDER}/>"
)
# set_property(TARGET umaa_cpp11_types PROPERTY CXX_STANDARD 11)
add_dependencies(umaa_cpp11_types gen_cpp11_umaa_types)

# Create the target for the AutoPilot executable
add_executable(autopilot
    "${CMAKE_CURRENT_SOURCE_DIR}/c++11/autopilot.cxx"
    "${CMAKE_CURRENT_SOURCE_DIR}/c++11/application.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/c++11/dds_umaa_participant.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/c++11/dds_umaa_participant.cxx"
)

target_link_libraries(autopilot
    PRIVATE
        RTIConnextDDS::cpp2_api
        umaa_cpp11_types
)
