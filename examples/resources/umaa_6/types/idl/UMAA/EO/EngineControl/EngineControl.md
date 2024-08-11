# EngineControl
The purpose of this service is to provide the control of the engine on the vehicle.

## Requests
### setEngine (EngineCommandType)
This operation is used to control the engines of the vehicle. The consumer must perform a "cancel" of the command to initiate the end of command execution as this command has no determinate end of execution.

## Responses
### reportEngineCommandAck (EngineCommandAckReportType)
This operation is used to report the commanded values to the engine of the vehicle.
### reportEngineCommandStatus (EngineCommandStatusType)
This operation is used to report the status of engine command.
