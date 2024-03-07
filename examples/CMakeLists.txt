#
# (c) 2019 Copyright, Real-Time Innovations, Inc.  All rights reserved.
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

set(CMAKE_POSITION_INDEPENDENT_CODE ON)


# Add the folder where the FindRTIConnextDDS.cmake file is placed to the
# CMAKE_MODULE_PATH variable
list(APPEND CMAKE_MODULE_PATH
    "${CMAKE_CURRENT_SOURCE_DIR}/resources/rticonnextdds-cmake-utils/cmake/Modules"
)

include(ConnextDdsCodegen)

# Find the ConnextDDS libraries. This will look for the core and API libraries
# only
find_package(RTIConnextDDS
    "6.1.2"
    REQUIRED
    COMPONENTS
        core
)


if(NOT TARGET rtiddsgen_umaa_types)
add_custom_target(rtiddsgen_umaa_types ALL)
endif()

set (_UMAA_TYPES)
set (_UMAA_GENERATED)
set (_UMAA_IDL_FOLDER "${CMAKE_CURRENT_SOURCE_DIR}/resources/umaa_521/")
set (_UMAA_CONST_IDL "${CMAKE_CURRENT_SOURCE_DIR}/resources/umaa_consts.idl")


# Add individual types instead of GLOB_RECURSE
# list(APPEND _UMAA_TYPES "BasicTypes/Quaternion.idl")
# list(APPEND _UMAA_TYPES "UMAA/Common/MaritimeEnumeration/MaritimeEnumerationSets.idl")
# list(APPEND _UMAA_TYPES "UMAA/Common/Measurement/Measurements.idl")
# list(APPEND _UMAA_TYPES "UMAA/Common/MeasurementCoordinate/EngineeringCoordinateAxes.idl")
# list(APPEND _UMAA_TYPES "UMAA/EO/AnchorControl/AnchorCommandType.idl")
# list(APPEND _UMAA_TYPES "UMAA/EO/AnchorStatus/AnchorReportType.idl")
# list(APPEND _UMAA_TYPES "UMAA/EO/AnchorControl/AnchorCommandStatusType.idl")

# Add all types
file(GLOB_RECURSE _UMAA_TYPES RELATIVE ${_UMAA_IDL_FOLDER} ${_UMAA_IDL_FOLDER}*.idl)


# Use Code Server
# set (CONNEXTDDS_USE_CODEGEN_SERVER ON)


foreach(_idl IN LISTS _UMAA_TYPES)
    string(CONCAT _idl_PATH ${_UMAA_IDL_FOLDER} ${_idl})
    get_filename_component(_idl_FOLDER ${_idl} DIRECTORY)
    get_filename_component(_idl_NAME ${_idl} NAME)

    # call rtiddsgen on the IDL files
    connextdds_rtiddsgen_run(
        IDL_FILE ${_idl_PATH}
        OUTPUT_DIRECTORY
            "${CMAKE_CURRENT_BINARY_DIR}/src/${_idl_FOLDER}"
        INCLUDE_DIRS "${_UMAA_IDL_FOLDER}"
        LANG "C++11"
        VAR "UMAA_TYPES"
    )
    # add generated files to list
    list(APPEND _UMAA_GENERATED ${UMAA_TYPES_CXX11_SOURCES})

    # create target per idl
    add_custom_target(${_idl_NAME}
        DEPENDS ${UMAA_TYPES_CXX11_SOURCES})
    add_dependencies(rtiddsgen_umaa_types ${_idl_NAME})

endforeach()

## Create shared library for UMAA Types
add_library(
    umaa_types_lib SHARED 
    ${_UMAA_GENERATED})
target_link_libraries(
    umaa_types_lib 
    RTIConnextDDS::cpp2_api)
target_include_directories(umaa_types_lib PUBLIC 
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/src/>")
add_dependencies(umaa_types_lib rtiddsgen_umaa_types)


# Call rtiddsgen on the IDL const file
connextdds_rtiddsgen_run(
    IDL_FILE ${_UMAA_CONST_IDL}
    OUTPUT_DIRECTORY
        "${CMAKE_CURRENT_BINARY_DIR}/src/"
    LANG "C++11"
    VAR "UMAA_CONSTS"
)

# ## Add target for UMAA consts file
add_custom_target(rtiddsgen_umaa_consts
    DEPENDS ${UMAA_CONSTS_CXX11_SOURCES})


# Create the target for the Anchor Controller executable
add_executable(anchor_controller
    "${CMAKE_CURRENT_SOURCE_DIR}/modern_cpp_compiled_types/anchor_controller.cxx"
    "${CMAKE_CURRENT_SOURCE_DIR}/modern_cpp_compiled_types/application.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/build/src/umaa_consts.hpp"
)
add_dependencies(anchor_controller rtiddsgen_umaa_consts)

# Link against the ConnextDDS and umaa_types_lib Libraries
target_link_libraries(
    anchor_controller
    PRIVATE
    RTIConnextDDS::cpp2_api
    umaa_types_lib
)

# Create the target for the autonomy executable
add_executable(autonomy
    "${CMAKE_CURRENT_SOURCE_DIR}/modern_cpp_dynamicdata_types/autonomy.cxx"
    "${CMAKE_CURRENT_SOURCE_DIR}/modern_cpp_dynamicdata_types/application.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/build/src/umaa_consts.hpp"
)
add_dependencies(autonomy rtiddsgen_umaa_consts)

# Link against the ConnextDDS libraries
target_link_libraries(
    autonomy
    PRIVATE
    RTIConnextDDS::cpp2_api
)

