# GlobalWaypointControl
The purpose of this service is to command the vehicle to traverse through a series of waypoints, each with a desired speed and the option to maintain track. Attitude, elevation, and position include optional tolerances. If specified, these tolerances are used to determine waypoint achievement. If the vehicle is unable to achieve the waypoint, then the command is considered to have failed. Speed and trackTolerance also include optional tolerances for their values. If specified, the vehicle is allowed to operate within these tolerances without failing the command. Otherwise, if any tolerances are violated after all specified values are initially achieved, then the command is considered to have failed. If a tolerance is not specified for any of these attributes, then it is a "best effort" to achieve the specified value for that attribute, and is therefore not considered a cause for the command to fail.

## Requests
### setGlobalWaypoint (GlobalWaypointCommandType)
This operation is used to command a series of waypoint data based in the global coordinate system.

## Responses
### reportGlobalWaypointCommandAck (GlobalWaypointCommandAckReportType)
This operation is used to report the commanded values of the waypoint data based in the global coordinate system.
### reportGlobalWaypointCommandStatus (GlobalWaypointCommandStatusType)
This operation is used to report the status of the global waypoint command.
### reportGlobalWaypointExecutionStatus (GlobalWaypointExecutionStatusReportType)
This operation is used to report execution status details related to a commanded series of waypoint data based in the global coordinate system.
