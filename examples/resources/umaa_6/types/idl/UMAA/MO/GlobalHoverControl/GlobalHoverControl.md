# GlobalHoverControl
The function of this service is to command the vehicle to actively maintain its position at a defined elevation (or current elevation if not defined) within the circle, and optionally with a defined heading. Elevation, heading and hoverRadius include optional tolerances for their values. If specified, the vehicle is allowed to operate within these tolerances without having the command fail. Otherwise if any tolerance is violated after the command is initially achieved, then the command is considered to have failed. If a tolerance is not specified for any of these attributes, then it is a "best effort" to maintain the specified value for that attribute, and is therefore not considered a cause for the command to fail.

## Requests
### setGlobalHover (GlobalHoverCommandType)
This operation is used to set the desired hover position in the global coordinate system given the desired location.

## Responses
### reportGlobalHoverCommandAck (GlobalHoverCommandAckReportType)
This operation is used to report the commanded values of the position or time that was commanded to the vehicle in the global coordinate system.
### reportGlobalHoverCommandStatus (GlobalHoverCommandStatusType)
This operation is used to report the status of the global hover command.
### reportGlobalHoverExecutionStatus (GlobalHoverExecutionStatusReportType)
This operation is used to report the current position or time that the vehicle was hovering based in the global coordinate system.
