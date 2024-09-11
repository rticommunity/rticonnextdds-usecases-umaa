# CommsChannelConfig
The purpose of this service is to give status info for both sender and receiver side of a comms device. For the sending side it gives info on the messages being buffered to be sent and sender statistics related to send history. For the receiver side, it gives last message received info and statistics on the data coming through the link. It also reports other comms system status of interest.

## Requests
### cancelCommsChannelAddMessageConfig (CommsChannelAddMessageCancelConfigType)
This operation is used to nullify the current configuration command.
### cancelCommsChannelDeleteMessageConfig (CommsChannelDeleteMessageCancelConfigType)
This operation is used to nullify the current configuration command.
### setCommsChannelAddMessageConfig (CommsChannelAddMessageConfigCommandType)
This operation is used to add a new message configuration.
### setCommsChannelDeleteMessageConfig (CommsChannelDeleteMessageConfigCommandType)
This operation is used to add a new message configuration.

## Responses
### reportCommsChannelAddMessageCancelConfigCommandStatus (CommsChannelAddMessageCancelConfigCommandStatusType)
This operation is used to report the status of the nullification of the current configuration command.
### reportCommsChannelAddMessageConfigAck (CommsChannelAddMessageConfigAckReportType)
This operation is used to report the current CommsChannelAddMessage configuration.
### reportCommsChannelAddMessageConfigCommandStatus (CommsChannelAddMessageConfigCommandStatusType)
This operation is used to provide the status of the current CommsChannelAddMessageConfig command.
### reportCommsChannelConfig (CommsChannelConfigReportType)
This operation is used to report the current status of the CommsChannelConfig service.
### reportCommsChannelDeleteMessageCancelConfigCommandStatus (CommsChannelDeleteMessageCancelConfigCommandStatusType)
This operation is used to report the status of the nullification of the current configuration command.
### reportCommsChannelDeleteMessageConfigAck (CommsChannelDeleteMessageConfigAckReportType)
This operation is used to report the current CommsChannelDeleteMessage configuration.
### reportCommsChannelDeleteMessageConfigCommandStatus (CommsChannelDeleteMessageConfigCommandStatusType)
This operation is used to provide the status of the current CommsChannelDeleteMessageConfig command.
