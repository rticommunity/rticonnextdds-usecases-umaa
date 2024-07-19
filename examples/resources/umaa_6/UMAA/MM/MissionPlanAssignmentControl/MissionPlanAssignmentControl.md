# MissionPlanAssignmentControl
The purpose of this service is to provide operations and interfaces required to assign tasks and objectives to available resources.

## Requests
### setMissionPlanAssignment (MissionPlanAssignmentCommandType)
This operation is used to assign a mission to an available resource.

## Responses
### reportMissionPlanAssignmentCommandAck (MissionPlanAssignmentCommandAckReportType)
This operation is used to provide the MissionPlanAssignment commanded values.
### reportMissionPlanAssignmentCommandStatus (MissionPlanAssignmentCommandStatusType)
This operation is used to provide the current status of assigning a mission to a resource.
