# TaskPlanAssignmentControl
The purpose of this service is to provide operations and interfaces required to assign tasks and objectives to available resources.

## Requests
### setTaskPlanAssignment (TaskPlanAssignmentCommandType)
This operation is used to assign a task to an available resource.

## Responses
### reportTaskPlanAssignmentCommandAck (TaskPlanAssignmentCommandAckReportType)
This operation is used to provide the TaskPlanAssignment commanded values.
### reportTaskPlanAssignmentCommandStatus (TaskPlanAssignmentCommandStatusType)
This operation is used to provide the current status of assigning a task to a resource.
