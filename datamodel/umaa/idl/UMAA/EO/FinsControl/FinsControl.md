# FinsControl
The purpose of this service is to provide the control of the deflection of a set of 1 or more fins (a fin system) for stabilization and mobility of the vehicle.

## Requests
### setFins (FinsCommandType)
This operation is used to control the fin deflection of a set of 1 or more fins (a fin system) on the vehicle. The consumer must perform a cancel of the command to initiate the end of command execution as this command has no determinate end of execution.

## Responses
### reportFinsCommandAck (FinsCommandAckReportType)
This operation is used to report the commanded deflection of a set of 1 or more fins (a fin system) on the vehicle.
### reportFinsCommandStatus (FinsCommandStatusType)
This operation is used to report the status of the fins deflection command.
