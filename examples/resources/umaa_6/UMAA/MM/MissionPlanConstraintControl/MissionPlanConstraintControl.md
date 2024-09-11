# MissionPlanConstraintControl
The purpose of this service is to provide the capability of adding/deleting constraints to/from the mission plan that must be handled during mission plan execution.

## Requests
### setMissionPlanConstraintAdd (MissionPlanConstraintAddCommandType)
This operation adds a new planned constraint that must be handled during mission plan execution.
### setMissionPlanConstraintDelete (MissionPlanConstraintDeleteCommandType)
This operation deletes an existing planned constraint from the mission plan.

## Responses
### reportMissionPlanConstraintAddCommandAck (MissionPlanConstraintAddCommandAckReportType)
This operation is used to provide the MissionPlanConstraintAdd commanded values.
### reportMissionPlanConstraintAddCommandStatus (MissionPlanConstraintAddCommandStatusType)
This operation is used to report the status of the current MissionPlanConstraintAdd command.
### reportMissionPlanConstraintDeleteCommandAck (MissionPlanConstraintDeleteCommandAckReportType)
This operation is used to provide the MissionPlanConstraintDelete commanded values.
### reportMissionPlanConstraintDeleteCommandStatus (MissionPlanConstraintDeleteCommandStatusType)
This operation is used to report the status of the current MissionPlanConstraintDelete command.
