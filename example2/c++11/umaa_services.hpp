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
        : public DDSUMAAControlService<
                  GlobalVectorCommandType,
                  GlobalVectorCommandStatusType,
                  GlobalVectorCommandAckReportType,
                  GlobalVectorExecutionStatusReportType> {
public:
    GlobalVectorControlServiceProvider(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAControlService(
                      dp,
                      SERVICE_KIND::PROVIDER,
                      GlobalVectorCommandTypeTopic,
                      GlobalVectorCommandStatusTypeTopic,
                      GlobalVectorCommandAckReportTypeTopic,
                      GlobalVectorExecutionStatusReportTypeTopic)
    {
        std::cout << "Creating GlobalVectorControlServiceProvider" << std::endl;
    }
};

/**
 * @brief Service consumer for GlobalVectorControl, handling command, status, ack, and execution status topics.
 */
class GlobalVectorControlServiceConsumer
        : public DDSUMAAControlService<
                  GlobalVectorCommandType,
                  GlobalVectorCommandStatusType,
                  GlobalVectorCommandAckReportType,
                  GlobalVectorExecutionStatusReportType> {
public:
    GlobalVectorControlServiceConsumer(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAControlService(
                      dp,
                      SERVICE_KIND::CONSUMER,
                      GlobalVectorCommandTypeTopic,
                      GlobalVectorCommandStatusTypeTopic,
                      GlobalVectorCommandAckReportTypeTopic,
                      GlobalVectorExecutionStatusReportTypeTopic)
    {
        std::cout << "Creating GlobalVectorControlServiceConsumer" << std::endl;
    }
};

/**
 * @brief Consumer service for SpeedReportType topic.
 */
class SpeedReportServiceConsumer
        : public DDSUMAAStatusService<SpeedReportType> {
public:
    SpeedReportServiceConsumer(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusService(
                      dp,
                      SERVICE_KIND::CONSUMER,
                      SpeedReportTypeTopic)
    {
        std::cout << "Creating SpeedReportServiceConsumer" << std::endl;
    }
};

/**
 * @brief Provider service for SpeedReportType topic.
 */
class SpeedReportServiceProvider
        : public DDSUMAAStatusService<SpeedReportType> {
public:
    SpeedReportServiceProvider(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusService(
                      dp,
                      SERVICE_KIND::PROVIDER,
                      SpeedReportTypeTopic)
    {
        std::cout << "Creating SpeedReportServiceProvider" << std::endl;
    }
};

/**
 * @brief Consumer service for VelocityReportType topic.
 */
class VelocityReportServiceConsumer
        : public DDSUMAAStatusService<VelocityReportType> {
public:
    VelocityReportServiceConsumer(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusService(
                      dp,
                      SERVICE_KIND::CONSUMER,
                      VelocityReportTypeTopic)
    {
        std::cout << "Creating VelocityReportServiceConsumer" << std::endl;
    }
};

/**
 * @brief Provider service for VelocityReportType topic.
 */
class VelocityReportServiceProvider
        : public DDSUMAAStatusService<VelocityReportType> {
public:
    VelocityReportServiceProvider(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusService(
                      dp,
                      SERVICE_KIND::PROVIDER,
                      VelocityReportTypeTopic)
    {
        std::cout << "Creating VelocityReportServiceProvider" << std::endl;
    }
};

/**
 * @brief Consumer service for HealthReportType topic.
 */
class HealthReportServiceConsumer
        : public DDSUMAAStatusService<HealthReportType> {
public:
    HealthReportServiceConsumer(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusService(
                      dp,
                      SERVICE_KIND::CONSUMER,
                      HealthReportTypeTopic)
    {
        std::cout << "Creating HealthReportServiceConsumer" << std::endl;
    }
};

/**
 * @brief Provider service for HealthReportType topic.
 */
class HealthReportServiceProvider
        : public DDSUMAAStatusService<HealthReportType> {
public:
    HealthReportServiceProvider(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusService(
                      dp,
                      SERVICE_KIND::PROVIDER,
                      HealthReportTypeTopic)
    {
        std::cout << "Creating HealthReportServiceProvider" << std::endl;
    }
};

/**
 * @brief Consumer service for GlobalPoseReportType topic.
 */
class GlobalPoseReportServiceConsumer
        : public DDSUMAAStatusService<GlobalPoseReportType> {
public:
    GlobalPoseReportServiceConsumer(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusService(
                      dp,
                      SERVICE_KIND::CONSUMER,
                      GlobalPoseReportTypeTopic)
    {
        std::cout << "Creating GlobalPoseReportServiceConsumer" << std::endl;
    }
};

/**
 * @brief Provider service for GlobalPoseReportType topic.
 */
class GlobalPoseReportServiceProvider
        : public DDSUMAAStatusService<GlobalPoseReportType> {
public:
    GlobalPoseReportServiceProvider(std::shared_ptr<DDSUMAAParticipant> &dp)
            : DDSUMAAStatusService(
                      dp,
                      SERVICE_KIND::PROVIDER,
                      GlobalPoseReportTypeTopic)
    {
        std::cout << "Creating GlobalPoseReportServiceProvider" << std::endl;
    }
};

#endif  // UMAA_SERVICES_HPP
