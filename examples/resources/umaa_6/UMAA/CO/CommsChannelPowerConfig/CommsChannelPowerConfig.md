# CommsChannelPowerConfig
The purpose of this service is to define the parameters needed for an unmanned vehicle to configure the power configuration for the comms channel.

## Requests
### cancelCommsChannelPowerConfig (CommsChannelPowerCancelConfigType)
This operation is used to nullify the current configuration command.
### setCommsChannelPowerConfig (CommsChannelPowerConfigCommandType)
This operation is used to set the CommsChannelPowerConfig command.

## Responses
### reportCommsChannelPowerCancelConfigCommandStatus (CommsChannelPowerCancelConfigCommandStatusType)
This operation is used to report the status of the nullification of the current configuration command.
### reportCommsChannelPowerConfig (CommsChannelPowerConfigReportType)
This operation is used to report the current status of the CommsChannelPowerConfig service.
### reportCommsChannelPowerConfigAck (CommsChannelPowerConfigAckReportType)
This operation is used to report the current CommsChannelPower configuration.
### reportCommsChannelPowerConfigCommandStatus (CommsChannelPowerConfigCommandStatusType)
This operation is used to report the status of the current CommsChannelPowerConfig command.
