# SASConfig
The purpose of this service is to define the parameters needed for an unmanned vehicle to configure the Synthetic Aperture Sonar (SAS).

## Requests
### cancelSASConfig (SASCancelConfigType)
This operation is used to nullify the current configuration command.
### setSASConfig (SASConfigCommandType)
This operation is used to set the SASConfig command.

## Responses
### reportSASCancelConfigCommandStatus (SASCancelConfigCommandStatusType)
This operation is used to report the status of the nullification of the current configuration command.
### reportSASConfig (SASConfigReportType)
This operation is used to report the current status of the SASConfig service.
### reportSASConfigAck (SASConfigAckReportType)
This operation is used to report the current SAS configuration.
### reportSASConfigCommandStatus (SASConfigCommandStatusType)
This operation is used to report the status of the current SASConfig command.
