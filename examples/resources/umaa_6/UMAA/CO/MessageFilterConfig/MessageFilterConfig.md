# MessageFilterConfig
The purpose of this service is to provide an independent filter that can be used to manage volume by message type for sending over the link.

## Requests
### cancelMessageFilterConfig (MessageFilterCancelConfigType)
This operation is used to nullify the current configuration command.
### setMessageFilterConfig (MessageFilterConfigCommandType)
This operation is used to add a new message filter configuration.

## Responses
### reportMessageFilterCancelConfigCommandStatus (MessageFilterCancelConfigCommandStatusType)
This operation is used to report the status of the nullification of the current configuration command.
### reportMessageFilterConfigAck (MessageFilterConfigAckReportType)
This operation is used to report the current MessageFilter configuration.
### reportMessageFilterConfigCommandStatus (MessageFilterConfigCommandStatusType)
This operation is used to provide the status of the current MessageFilterConfig command.
