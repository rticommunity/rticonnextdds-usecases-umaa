cmake_minimum_required(VERSION 3.11)
project(UMAA_Repository)

# Check if CONNEXTDDS_ARCH is set
if(NOT DEFINED CONNEXTDDS_ARCH AND NOT DEFINED ENV{CONNEXTDDS_ARCH})
    message(FATAL_ERROR 
        "========================================================================"
        "\nERROR: CONNEXTDDS_ARCH is not set."
        "\n========================================================================"
        "\nHelper scripts to set the environment are included in the Connext"
        "installation directory, typically found at:"
        "\n  <install_dir>/resource/scripts/rtisetenv_<target>.bash"
        "\nExamples:"
        "\n  source /opt/rti_connext_dds-6.1.2/resource/scripts/rtisetenv_x64Linux4gcc7.3.0.bash"
        "\n  source /opt/rti_connext_dds-7.3.0/resource/scripts/rtisetenv_x64Linux4gcc7.3.0.bash"
        "\nOr set it manually:"
        "\n  export CONNEXTDDS_ARCH=x64Linux4gcc7.3.0"
        "\n  cmake .. -DCONNEXTDDS_ARCH=x64Linux4gcc7.3.0"
        "\n========================================================================"
    )
endif()

# Get the architecture (from environment or CMake variable)
if(NOT CONNEXTDDS_ARCH)
    set(CONNEXTDDS_ARCH $ENV{CONNEXTDDS_ARCH})
endif()

message(STATUS "========================================================================")
message(STATUS "RTI Connext DDS Target Architecture: ${CONNEXTDDS_ARCH}")
message(STATUS "========================================================================")

# Add folder where FindRTIConnextDDS.cmake file is to CMAKE_MODULE_PATH
list(APPEND CMAKE_MODULE_PATH
    "${CMAKE_CURRENT_SOURCE_DIR}/rticonnextdds-cmake-utils/cmake/Modules"
)

# Find RTI Connext DDS
find_package(RTIConnextDDS
    "6.1.2"
    REQUIRED
    COMPONENTS
        core
)

# Build datamodel first
add_subdirectory(datamodel)

# Build examples
add_subdirectory(examples/xml-app-framework)
add_subdirectory(examples/service-template-wrappers)

message(STATUS "==================================================")
message(STATUS "UMAA Repository Build Configuration")
message(STATUS "==================================================")
message(STATUS "Datamodel: Built as umaa_types library")
message(STATUS "Examples:")
message(STATUS "  - xml-app-framework")
message(STATUS "  - service-template-wrappers")
message(STATUS "==================================================")
