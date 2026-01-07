cmake_minimum_required(VERSION 3.11)
project(UMAA_DataModel)

# Check if this file is being run as the root project
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    get_filename_component(ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/.." ABSOLUTE)
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

# Verify RTI Connext was found by parent
if(NOT RTIConnextDDS_FOUND)
    message(FATAL_ERROR "RTI Connext DDS not found - should be found by parent CMakeLists.txt")
endif()

# Set output directories
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/lib")

# Set the path for generated C++11 files
set(UMAA_CPP11_GEN_DIR "${CMAKE_CURRENT_BINARY_DIR}/umaa_cpp11_gen")
set(UMAA_IDL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/umaa/idl")

include(ConnextDdsCodegen)

# Variables to hold IDL files and generated sources
set(_UMAA_TYPES)
set(_UMAA_CPP11_GENERATED)

# Add target to run codegen on idl files for cpp11
if(NOT TARGET gen_cpp11_umaa_types)
    add_custom_target(gen_cpp11_umaa_types ALL)
endif()

# Find all IDL files and generate sources
file(GLOB_RECURSE _UMAA_TYPES RELATIVE ${UMAA_IDL_DIR} ${UMAA_IDL_DIR}/UMAA/*.idl)

foreach(_idl IN LISTS _UMAA_TYPES)
    # Maintain folder structure on output so includes work
    get_filename_component(_idl_FOLDER ${_idl} DIRECTORY)
    get_filename_component(_idl_NAME ${_idl} NAME)
    set(_idl_PATH "${UMAA_IDL_DIR}/${_idl}")

    # call rtiddsgen on the IDL files
    connextdds_rtiddsgen_run(
        IDL_FILE ${_idl_PATH}
        OUTPUT_DIRECTORY "${UMAA_CPP11_GEN_DIR}/${_idl_FOLDER}"
        INCLUDE_DIRS "${UMAA_IDL_DIR}"
        LANG "C++11"
        VAR "UMAA_TYPES"
    )
    
    # add generated files to list
    list(APPEND _UMAA_CPP11_GENERATED ${UMAA_TYPES_CXX11_SOURCES})

    # create target per idl
    add_custom_target(${_idl_NAME}_datamodel
        DEPENDS ${UMAA_TYPES_CXX11_SOURCES})
    add_dependencies(gen_cpp11_umaa_types ${_idl_NAME}_datamodel)
endforeach()

# Create UMAA library from generated sources
add_library(umaa_types SHARED
    ${_UMAA_CPP11_GENERATED}
)

target_link_libraries(umaa_types
    PUBLIC
        RTIConnextDDS::cpp2_api
)

target_include_directories(umaa_types
    PUBLIC
        "$<BUILD_INTERFACE:${UMAA_CPP11_GEN_DIR}/>"
)

add_dependencies(umaa_types gen_cpp11_umaa_types)

# Set C++ standard
set_target_properties(umaa_types PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
)

# Install targets
install(TARGETS umaa_types
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)

# Install generated headers
install(DIRECTORY ${UMAA_CPP11_GEN_DIR}/
    DESTINATION include
    FILES_MATCHING PATTERN "*.hpp"
)
