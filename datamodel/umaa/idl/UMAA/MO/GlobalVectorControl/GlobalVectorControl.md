# GlobalVectorControl
The purpose of this service is to command the vehicle to maintain a provided speed, direction of travel, and altitude or depth (if supported). Direction, elevation, and speed include optional tolerances for their values. If specified, the vehicle is allowed to operate within these tolerances without having the command fail. Otherwise, if any tolerance is violated after the command is initially achieved, then the command is considered to have failed. If a tolerance is not specified for any of these attributes, then it is a "best effort" to maintain the specified value for that attribute, and is therefore not considered a cause for the command to fail.

## Requests
### setGlobalVector (GlobalVectorCommandType)
This operation is used to command the speed and altitude or depth of a vehicle in the global coordinate system. If the command attributes do not specify a determinate end of execution, the consumer must perform a cancel of the command to initiate the end of command execution.

## Responses
### reportGlobalVectorCommandAck (GlobalVectorCommandAckReportType)
This operation is used to report the current commanded values of the speed and depth or altitude to a vehicle in the global coordinate system.
### reportGlobalVectorCommandStatus (GlobalVectorCommandStatusType)
This operation is used to report the status of the global vector command.
### reportGlobalVectorExecutionStatus (GlobalVectorExecutionStatusReportType)
This operation is used to report the current vector data based in the global coordinate system.
