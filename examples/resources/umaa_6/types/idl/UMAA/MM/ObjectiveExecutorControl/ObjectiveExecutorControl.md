# ObjectiveExecutorControl
The purpose of this service is to manage the execution of an objective. This includes providing the objective to be executed as well as controlling and monitoring its current execution state.

## Requests
### setObjectiveExecutor (ObjectiveExecutorCommandType)
This operation is used to set the ObjectiveExecutor command.
### setObjectiveExecutorState (ObjectiveExecutorStateCommandType)
This operation is used to set the ObjectiveExecutorState command.

## Responses
### reportObjectiveExecutorCommandAck (ObjectiveExecutorCommandAckReportType)
This operation is used to provide the ObjectiveExecutor commanded values.
### reportObjectiveExecutorCommandStatus (ObjectiveExecutorCommandStatusType)
This operation is used to report the status of the current ObjectiveExecutor command.
### reportObjectiveExecutorExecutionStatus (ObjectiveExecutorExecutionStatusReportType)
This operation is used to report the current ObjectiveExecutor execution status.
### reportObjectiveExecutorStateCommandAck (ObjectiveExecutorStateCommandAckReportType)
This operation is used to provide the ObjectiveExecutorState commanded values.
### reportObjectiveExecutorStateCommandStatus (ObjectiveExecutorStateCommandStatusType)
This operation is used to report the status of the current ObjectiveExecutorState command.
