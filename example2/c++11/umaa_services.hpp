#ifndef UMAA_SERVICES_HPP
#define UMAA_SERVICES_HPP

#include "dds_umaa_service.hpp"

#include <UMAA/MO/GlobalVectorControl/GlobalVectorCommandType.hpp>
#include <UMAA/MO/GlobalVectorControl/GlobalVectorCommandStatusType.hpp>
#include <UMAA/MO/GlobalVectorControl/GlobalVectorCommandAckReportType.hpp>
#include <UMAA/MO/GlobalVectorControl/GlobalVectorExecutionStatusReportType.hpp>

using namespace UMAA::MO::GlobalVectorControl;

class GlobalVectorControlServiceProvider : public DDSUMAAControlService<
                                               GlobalVectorCommandType,
                                               GlobalVectorCommandStatusType,
                                               GlobalVectorCommandAckReportType>
{
public:
  GlobalVectorControlServiceProvider(std::shared_ptr<DDSParticipant> &dp) : DDSUMAAControlService(dp,
                                                                                                  SERVICE_KIND::PROVIDER,
                                                                                                  GlobalVectorCommandTypeTopic,
                                                                                                  GlobalVectorCommandStatusTypeTopic,
                                                                                                  GlobalVectorCommandAckReportTypeTopic)
  {
    std::cout << "Creating GlobalVectorControlServiceProvider" << std::endl;
  }
};

class GlobalVectorControlServiceConsumer : public DDSUMAAControlService<
                                               GlobalVectorCommandType,
                                               GlobalVectorCommandStatusType,
                                               GlobalVectorCommandAckReportType>
{
public:
  GlobalVectorControlServiceConsumer(std::shared_ptr<DDSParticipant> &dp) : DDSUMAAControlService(dp,
                                                                                                  SERVICE_KIND::CONSUMER,
                                                                                                  GlobalVectorCommandTypeTopic,
                                                                                                  GlobalVectorCommandStatusTypeTopic,
                                                                                                  GlobalVectorCommandAckReportTypeTopic)
  {
    std::cout << "Creating GlobalVectorControlServiceConsumer" << std::endl;
  }
};

#endif // UMAA_SERVICES_HPP
