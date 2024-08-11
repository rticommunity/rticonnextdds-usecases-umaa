# GlobalPoseConfig
The purpose of this service is to command the current position and orientation of the vehicle in the global coordinate system. The service exposes interfaces to set the position and orientation for those vehicles requiring external pose updates. It is designated to provide an initial position for dead-reckoning.

## Requests
### cancelGlobalPoseConfig (GlobalPoseCancelConfigType)
This operation is used to nullify the current configuration command.
### setGlobalPoseConfig (GlobalPoseConfigCommandType)
This operation is used to set the configuration of the vehicle's global pose.

## Responses
### reportGlobalPoseCancelConfigCommandStatus (GlobalPoseCancelConfigCommandStatusType)
This operation is used to report the status of the nullification of the current configuration command.
### reportGlobalPoseConfig (GlobalPoseConfigReportType)
This operation is used to report the current configuration command.
### reportGlobalPoseConfigAck (GlobalPoseConfigAckReportType)
This operation is used to report the current GlobalPose configuration.
### reportGlobalPoseConfigCommandStatus (GlobalPoseConfigCommandStatusType)
This operation is used to report the status of the current configuration command.
