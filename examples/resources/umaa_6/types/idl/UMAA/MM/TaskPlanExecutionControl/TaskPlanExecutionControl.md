# TaskPlanExecutionControl
The purpose of this service is to set the desired execution state of the task plan.

## Requests
### setTaskPlanExecution (TaskPlanExecutionCommandType)
This operation is used to set the current values of a task plan execution command for a mission plan.

## Responses
### reportTaskPlanExecutionCommandAck (TaskPlanExecutionCommandAckReportType)
This operation is used to provide the TaskPlanExecution commanded values.
### reportTaskPlanExecutionCommandStatus (TaskPlanExecutionCommandStatusType)
This operation is used to report the current status of executing the task plan execution command.
