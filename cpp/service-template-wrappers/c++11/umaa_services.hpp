/*
 * (c) Copyright, Real-Time Innovations, 2025.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 */

#ifndef UMAA_SERVICES_HPP
#define UMAA_SERVICES_HPP

#include "dds_umaa_service.hpp"

#include "UMAA/MO/PrimitiveDriverControl/PrimitiveDriverCommandAckReportType.hpp"
#include "UMAA/MO/PrimitiveDriverControl/PrimitiveDriverCommandStatusType.hpp"
#include "UMAA/MO/PrimitiveDriverControl/PrimitiveDriverExecutionStatusReportType.hpp"
#include "UMAA/MO/PrimitiveDriverControl/PrimitiveDriverCommandType.hpp"
#include "UMAA/MO/GlobalVectorControl/GlobalVectorCommandAckReportType.hpp"
#include "UMAA/MO/GlobalVectorControl/GlobalVectorCommandStatusType.hpp"
#include "UMAA/MO/GlobalVectorControl/GlobalVectorExecutionStatusReportType.hpp"
#include "UMAA/MO/GlobalVectorControl/GlobalVectorCommandType.hpp"
#include "UMAA/MO/GlobalHoverControl/GlobalHoverCommandAckReportType.hpp"
#include "UMAA/MO/GlobalHoverControl/GlobalHoverCommandStatusType.hpp"
#include "UMAA/MO/GlobalHoverControl/GlobalHoverExecutionStatusReportType.hpp"
#include "UMAA/MO/GlobalHoverControl/GlobalHoverCommandType.hpp"
#include "UMAA/EO/UVPlatformSpecs/UVPlatformCapabilitiesReportType.hpp"
#include "UMAA/EO/UVPlatformSpecs/UVPlatformSpecsReportType.hpp"
#include "UMAA/SO/LogReport/LogReportType.hpp"
#include "UMAA/SO/HealthReport/HealthReportType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintAddCommandAckReportType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintAddCommandStatusType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintDeleteCommandAckReportType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintDeleteCommandStatusType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintAddCommandType.hpp"
#include "UMAA/MM/MissionPlanConstraintControl/MissionPlanConstraintDeleteCommandType.hpp"
#include "UMAA/MM/ActiveConstraintsControl/ActiveConstraintsCommandAckReportType.hpp"
#include "UMAA/MM/ActiveConstraintsControl/ActiveConstraintsCommandStatusType.hpp"
#include "UMAA/MM/ActiveConstraintsControl/ActiveConstraintsCommandType.hpp"
#include "UMAA/MM/ConditionalReport/ConditionalReportType.hpp"
#include "UMAA/SA/GlobalPoseStatus/GlobalPoseReportType.hpp"
#include "UMAA/SA/VelocityStatus/VelocityReportType.hpp"
#include "UMAA/SA/SpeedStatus/SpeedReportType.hpp"
#include "UMAA/SA/WindStatus/WindReportType.hpp"
#include "UMAA/SA/WaterCurrentStatus/WaterCurrentReportType.hpp"

using namespace UMAA::MO::PrimitiveDriverControl;
using namespace UMAA::MO::GlobalVectorControl;
using namespace UMAA::MO::GlobalHoverControl;
using namespace UMAA::EO::UVPlatformSpecs;
using namespace UMAA::SO::LogReport;
using namespace UMAA::SO::HealthReport;
using namespace UMAA::MM::MissionPlanConstraintControl;
using namespace UMAA::MM::ActiveConstraintsControl;
using namespace UMAA::SA::SpeedStatus;
using namespace UMAA::SA::GlobalPoseStatus;
using namespace UMAA::SA::VelocityStatus;
using namespace UMAA::SA::WindStatus;
using namespace UMAA::SA::WaterCurrentStatus;
using namespace UMAA::MM::ConditionalReport;

/**
 * @brief Service provider for GlobalVectorControl, handling command, status, ack, and execution status topics.
 */
class GlobalVectorControlServiceProvider
        : public DDSUMAAControlProvider<
                  GlobalVectorCommandType,
                  GlobalVectorCommandStatusType,
                  GlobalVectorCommandAckReportType,
                  GlobalVectorExecutionStatusReportType> {
public:
    GlobalVectorControlServiceProvider(
            std::shared_ptr<DDSUMAAParticipant> &dp,
            CommandCallback on_command_callback)
            : DDSUMAAControlProvider(
                      dp,
                      GlobalVectorCommandTypeTopic,
                      GlobalVectorCommandStatusTypeTopic,
                      GlobalVectorCommandAckReportTypeTopic,
                      GlobalVectorExecutionStatusReportTypeTopic,
                      on_command_callback)
    {
        std::cout << "Creating GlobalVectorControlServiceProvider" << std::endl;
    }
};

/**
 * @brief Service consumer for GlobalVectorControl, handling command, status, ack, and execution status topics.
 */
class GlobalVectorControlServiceConsumer
        : public DDSUMAAControlConsumer<
                  GlobalVectorCommandType,
                  GlobalVectorCommandStatusType,
                  GlobalVectorCommandAckReportType,
                  GlobalVectorExecutionStatusReportType> {
public:
    GlobalVectorControlServiceConsumer(
            std::shared_ptr<DDSUMAAParticipant> &dp,
            CommandStatusCallback on_command_status_callback,
            CommandAckCallback on_command_ack_callback,
            ExecutionStatusCallback on_execution_status_callback)
            : DDSUMAAControlConsumer(
                      dp,
                      GlobalVectorCommandTypeTopic,
                      GlobalVectorCommandStatusTypeTopic,
                      GlobalVectorCommandAckReportTypeTopic,
                      GlobalVectorExecutionStatusReportTypeTopic,
                      on_command_status_callback,
                      on_command_ack_callback,
                      on_execution_status_callback)
    {
        std::cout << "Creating GlobalVectorControlServiceConsumer" << std::endl;
    }
};

/**
 * @brief Consumer service for SpeedReportType topic.
 */
class SpeedReportServiceConsumer
        : public DDSUMAAStatusConsumer<SpeedReportType> {
public:
    SpeedReportServiceConsumer(
            std::shared_ptr<DDSUMAAParticipant> &dp,
            StatusCallback on_status_callback)
            : DDSUMAAStatusConsumer(
                      dp,
                      SpeedReportTypeTopic,
                      on_status_callback)
    {
        std::cout << "Creating SpeedReportServiceConsumer" << std::endl;
    }
};

/**
 * @brief Provider service for SpeedReportType topic.
 */
class SpeedReportServiceProvider
        : public DDSUMAAStatusProvider<SpeedReportType> {
public:
    SpeedReportServiceProvider(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusProvider(
                      dp,
                      SpeedReportTypeTopic)
    {
        std::cout << "Creating SpeedReportServiceProvider" << std::endl;
    }
};

/**
 * @brief Consumer service for VelocityReportType topic.
 */
class VelocityReportServiceConsumer
        : public DDSUMAAStatusConsumer<VelocityReportType> {
public:
    VelocityReportServiceConsumer(
            std::shared_ptr<DDSUMAAParticipant> &dp,
            StatusCallback on_status_callback)
            : DDSUMAAStatusConsumer(
                      dp,
                      VelocityReportTypeTopic,
                      on_status_callback)
    {
        std::cout << "Creating VelocityReportServiceConsumer" << std::endl;
    }
};

/**
 * @brief Provider service for VelocityReportType topic.
 */
class VelocityReportServiceProvider
        : public DDSUMAAStatusProvider<VelocityReportType> {
public:
    VelocityReportServiceProvider(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusProvider(
                      dp,
                      VelocityReportTypeTopic)
    {
        std::cout << "Creating VelocityReportServiceProvider" << std::endl;
    }
};

/**
 * @brief Consumer service for HealthReportType topic.
 */
class HealthReportServiceConsumer
        : public DDSUMAAStatusConsumer<HealthReportType> {
public:
    HealthReportServiceConsumer(
            std::shared_ptr<DDSUMAAParticipant> &dp,
            StatusCallback on_status_callback)
            : DDSUMAAStatusConsumer(
                      dp,
                      HealthReportTypeTopic,
                      on_status_callback)
    {
        std::cout << "Creating HealthReportServiceConsumer" << std::endl;
    }
};

/**
 * @brief Provider service for HealthReportType topic.
 */
class HealthReportServiceProvider
        : public DDSUMAAStatusProvider<HealthReportType> {
public:
    HealthReportServiceProvider(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusProvider(
                      dp,
                      HealthReportTypeTopic)
    {
        std::cout << "Creating HealthReportServiceProvider" << std::endl;
    }
};

/**
 * @brief Consumer service for GlobalPoseReportType topic.
 */
class GlobalPoseReportServiceConsumer
        : public DDSUMAAStatusConsumer<GlobalPoseReportType> {
public:
    GlobalPoseReportServiceConsumer(
            std::shared_ptr<DDSUMAAParticipant> &dp,
            StatusCallback on_status_callback)
            : DDSUMAAStatusConsumer(
                      dp,
                      GlobalPoseReportTypeTopic,
                      on_status_callback)
    {
        std::cout << "Creating GlobalPoseReportServiceConsumer" << std::endl;
    }
};

/**
 * @brief Provider service for GlobalPoseReportType topic.
 */
class GlobalPoseReportServiceProvider
        : public DDSUMAAStatusProvider<GlobalPoseReportType> {
public:
    GlobalPoseReportServiceProvider(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusProvider(
                      dp,
                      GlobalPoseReportTypeTopic)
    {
        std::cout << "Creating GlobalPoseReportServiceProvider" << std::endl;
    }
};

#endif  // UMAA_SERVICES_HPP
