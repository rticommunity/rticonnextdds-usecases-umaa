# ContactFilterConfig
The purpose of this service is to provide a specialized filter that can be used to manage volume for contact reports for external transfer. Enables publishing per configuration information in order to be able to manage comms link bandwidth.

## Requests
### cancelContactFilterConfig (ContactFilterCancelConfigType)
This operation is used to nullify the current configuration command.
### setContactFilterConfig (ContactFilterConfigCommandType)
This operation is used to add a new contact filter configuration.

## Responses
### reportContactFilterCancelConfigCommandStatus (ContactFilterCancelConfigCommandStatusType)
This operation is used to report the status of the nullification of the current configuration command.
### reportContactFilterConfigAck (ContactFilterConfigAckReportType)
This operation is used to report the current ContactFilter configuration.
### reportContactFilterConfigCommandStatus (ContactFilterConfigCommandStatusType)
This operation is used to provide the status of the current ContactFilterConfig command.
