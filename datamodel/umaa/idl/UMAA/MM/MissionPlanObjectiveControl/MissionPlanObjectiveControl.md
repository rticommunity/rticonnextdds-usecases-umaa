# MissionPlanObjectiveControl
The purpose of this service is to manage objectives for the mission plan.

## Requests
### setMissionPlanObjectiveAdd (MissionPlanObjectiveAddCommandType)
This operation adds a new objective to the mission plan.
### setMissionPlanObjectiveDelete (MissionPlanObjectiveDeleteCommandType)
This operation deletes an existing objective from the mission plan.

## Responses
### reportMissionPlanObjectiveAddCommandAck (MissionPlanObjectiveAddCommandAckReportType)
This operation is used to provide the MissionPlanObjectiveAdd commanded values.
### reportMissionPlanObjectiveAddCommandStatus (MissionPlanObjectiveAddCommandStatusType)
This operation is used to report the status of the current MissionPlanObjectiveAdd command.
### reportMissionPlanObjectiveDeleteCommandAck (MissionPlanObjectiveDeleteCommandAckReportType)
This operation is used to provide the MissionPlanObjectiveDelete commanded values.
### reportMissionPlanObjectiveDeleteCommandStatus (MissionPlanObjectiveDeleteCommandStatusType)
This operation is used to report the status of the current MissionPlanObjectiveDelete command.
