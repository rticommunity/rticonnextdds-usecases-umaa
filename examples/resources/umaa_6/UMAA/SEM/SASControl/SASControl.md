# SASControl
The purpose of this service is to define the parameters needed for an unmanned vehicle to control the Synthetic Aperture Sonar (SAS) operational state.

## Requests
### setSAS (SASCommandType)
This operation is used to set the SAS command.

## Responses
### reportSASCommandAck (SASCommandAckReportType)
This operation is used to provide the SAS commanded values.
### reportSASCommandStatus (SASCommandStatusType)
This operation is used to report the status of the current SAS command.
