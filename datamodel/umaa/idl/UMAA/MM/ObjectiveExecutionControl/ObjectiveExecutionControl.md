# ObjectiveExecutionControl
The purpose of this service is to set the desired execution state of an objective.

## Requests
### setObjectiveExecution (ObjectiveExecutionCommandType)
This operation is used to set the current values of an objective execution command within a task plan of a mission plan.

## Responses
### reportObjectiveExecutionCommandAck (ObjectiveExecutionCommandAckReportType)
This operation is used to provide the ObjectiveExecution commanded values.
### reportObjectiveExecutionCommandStatus (ObjectiveExecutionCommandStatusType)
This operation is used to report the current status of executing the objective execution command.
