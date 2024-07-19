# MissionPlanTaskControl
The purpose of this service is to manage tasks for the mission plan.

## Requests
### setMissionPlanTaskAdd (MissionPlanTaskAddCommandType)
This operation adds a new task to the mission plan.
### setMissionPlanTaskDelete (MissionPlanTaskDeleteCommandType)
This operation deletes an existing task from the mission plan.

## Responses
### reportMissionPlanTaskAddCommandAck (MissionPlanTaskAddCommandAckReportType)
This operation is used to provide the MissionPlanTaskAdd commanded values.
### reportMissionPlanTaskAddCommandStatus (MissionPlanTaskAddCommandStatusType)
This operation is used to report the status of the current MissionPlanTaskAdd command.
### reportMissionPlanTaskDeleteCommandAck (MissionPlanTaskDeleteCommandAckReportType)
This operation is used to provide the MissionPlanTaskDelete commanded values.
### reportMissionPlanTaskDeleteCommandStatus (MissionPlanTaskDeleteCommandStatusType)
This operation is used to report the status of the current MissionPlanTaskDelete command.
