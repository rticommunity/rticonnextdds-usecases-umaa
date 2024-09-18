# MissionPlanMissionControl
The purpose of this service is to manage missions for the mission plan.

## Requests
### setMissionPlanMissionAdd (MissionPlanMissionAddCommandType)
This operation adds a new mission to the mission plan.
### setMissionPlanMissionClear (MissionPlanMissionClearCommandType)
This operation is used to clear all mission plan-related information.
### setMissionPlanMissionDelete (MissionPlanMissionDeleteCommandType)
This operation deletes an existing mission from the mission plan.

## Responses
### reportMissionPlanMissionAddCommandAck (MissionPlanMissionAddCommandAckReportType)
This operation is used to provide the MissionPlanMissionAdd commanded values.
### reportMissionPlanMissionAddCommandStatus (MissionPlanMissionAddCommandStatusType)
This operation is used to report the status of the current MissionPlanMissionAdd command.
### reportMissionPlanMissionClearCommandAck (MissionPlanMissionClearCommandAckReportType)
This operation is used to provide the MissionPlanMissionClear commanded values.
### reportMissionPlanMissionClearCommandStatus (MissionPlanMissionClearCommandStatusType)
This operation is used to report the status of the current MissionPlanMissionClear command.
### reportMissionPlanMissionDeleteCommandAck (MissionPlanMissionDeleteCommandAckReportType)
This operation is used to provide the MissionPlanMissionDelete commanded values.
### reportMissionPlanMissionDeleteCommandStatus (MissionPlanMissionDeleteCommandStatusType)
This operation is used to report the status of the current MissionPlanMissionDelete command.
