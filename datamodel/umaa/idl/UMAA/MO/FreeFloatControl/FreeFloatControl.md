# FreeFloatControl
The purpose of this service is to command the vehicle to free float.

## Requests
### setFreeFloat (FreeFloatCommandType)
This operation is used to set the FreeFloat command.

## Responses
### reportFreeFloatCommandAck (FreeFloatCommandAckReportType)
This operation is used to provide the FreeFloat commanded values.
### reportFreeFloatCommandStatus (FreeFloatCommandStatusType)
This operation is used to report the status of the current FreeFloat command.
### reportFreeFloatExecutionStatus (FreeFloatExecutionStatusReportType)
This operation is used to report the time that the vehicle was free floating.
