# BITConfig
The purpose of this service is to configure a Built-In-Test (BIT).

## Requests
### cancelBITConfig (BITCancelConfigType)
This operation is used to nullify the current configuration command.
### setBITConfig (BITConfigCommandType)
This operation is used to set the BIT configuration command.

## Responses
### reportBITCancelConfigCommandStatus (BITCancelConfigCommandStatusType)
This operation is used to report the status of the nullification of the current configuration command.
### reportBITConfig (BITConfigReportType)
This operation is used to report the current status of the BIT configuration service.
### reportBITConfigAck (BITConfigAckReportType)
This operation is used to report the current BIT configuration.
### reportBITConfigCommandStatus (BITConfigCommandStatusType)
This operation is used to report the status of the current BIT configuration command.
