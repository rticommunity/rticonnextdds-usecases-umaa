# MissionPlanExecutionControl
The purpose of this service is to set the desired execution state of a mission plan.

## Requests
### setMissionPlanExecution (MissionPlanExecutionCommandType)
This operation is used to set the current values of a mission plan execution command.

## Responses
### reportMissionPlanExecutionCommandAck (MissionPlanExecutionCommandAckReportType)
This operation is used to provide the MissionPlanExecution commanded values.
### reportMissionPlanExecutionCommandStatus (MissionPlanExecutionCommandStatusType)
This operation is used to report the current status of executing a mission plan execution command.
