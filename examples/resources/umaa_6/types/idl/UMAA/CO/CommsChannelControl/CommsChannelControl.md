# CommsChannelControl
The purpose of this service is to provide the operations needed for an unmanned vehicle to control the comms channel.

## Requests
### setCommsChannelClearAll (CommsChannelClearAllCommandType)
This operation is used to set the CommsChannelClearAll command.
### setCommsChannelClearMessage (CommsChannelClearMessageCommandType)
This operation is used to set the CommsChannelClearMessage command.
### setCommsChannelReset (CommsChannelResetCommandType)
This operation is used to set the CommsChannelReset command.
### setCommsChannelShutdown (CommsChannelShutdownCommandType)
This operation is used to set the CommsChannelShutdown command.
### setCommsChannelStartup (CommsChannelStartupCommandType)
This operation is used to set the CommsChannelStartup command.

## Responses
### reportCommsChannelClearAllCommandAck (CommsChannelClearAllCommandAckReportType)
This operation is used to provide the CommsChannelClearAll commanded values.
### reportCommsChannelClearAllCommandStatus (CommsChannelClearAllCommandStatusType)
This operation is used to report the status of the current CommsChannelClearAll command.
### reportCommsChannelClearMessageCommandAck (CommsChannelClearMessageCommandAckReportType)
This operation is used to provide the CommsChannelClearMessage commanded values.
### reportCommsChannelClearMessageCommandStatus (CommsChannelClearMessageCommandStatusType)
This operation is used to report the status of the current CommsChannelClearMessage command.
### reportCommsChannelResetCommandAck (CommsChannelResetCommandAckReportType)
This operation is used to provide the CommsChannelReset commanded values.
### reportCommsChannelResetCommandStatus (CommsChannelResetCommandStatusType)
This operation is used to report the status of the current CommsChannelReset command.
### reportCommsChannelShutdownCommandAck (CommsChannelShutdownCommandAckReportType)
This operation is used to provide the CommsChannelShutdown commanded values.
### reportCommsChannelShutdownCommandStatus (CommsChannelShutdownCommandStatusType)
This operation is used to report the status of the current CommsChannelShutdown command.
### reportCommsChannelStartupCommandAck (CommsChannelStartupCommandAckReportType)
This operation is used to provide the CommsChannelStartup commanded values.
### reportCommsChannelStartupCommandStatus (CommsChannelStartupCommandStatusType)
This operation is used to report the status of the current CommsChannelStartup command.
