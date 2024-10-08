# GlobalDriftControl
The purpose of this service is to maintain the vehicle's position at a specified elevation (or current elevation if not specified) within a defined drift radius, while in a reduced power mode. See figure for reference. Drift radius and elevation include optional tolerances. If specified, the vehicle is allowed to operate within these tolerances without having the command fail. Otherwise, if any tolerances are violated after the command is initially achieved, then the command is considered to have failed. If a tolerance is not specified for any of these attributes, then it is a "best effort" to maintain the specified value for that attribute, and is therefore not considered a cause for the command to fail.

## Requests
### setGlobalDrift (GlobalDriftCommandType)
This operation is used to set the desired position in the global coordinate system given the specified global drift and/or time.

## Responses
### reportGlobalDriftCommandAck (GlobalDriftCommandAckReportType)
This operation is used to report the commanded values of the position and global drift and/or time that were commanded to the vehicle in the global coordinate system.
### reportGlobalDriftCommandStatus (GlobalDriftCommandStatusType)
This operation is used to report the status of the global drift command.
### reportGlobalDriftExecutionStatus (GlobalDriftExecutionStatusReportType)
This operation is used to report the current state of the vehicle drift in the global coordinate system.
