# ConditionalControl
The purpose of this service is to manage conditionals that initiates the execution of an objective and/or enables a constraint.

## Requests
### setConditionalAdd (ConditionalAddCommandType)
This operation is used to add a new conditional. If the conditionalID already exists, the operation has no effect and the associated command status must be reported as FAILED.
### setConditionalDelete (ConditionalDeleteCommandType)
This operation is used to delete an existing conditional.

## Responses
### reportConditionalAddCommandAck (ConditionalAddCommandAckReportType)
This operation is used to provide the ConditionalAdd commanded values.
### reportConditionalAddCommandStatus (ConditionalAddCommandStatusType)
This operation is used to report the status of the current ConditionalAdd command.
### reportConditionalDeleteCommandAck (ConditionalDeleteCommandAckReportType)
This operation is used to provide the ConditionalDelete commanded values.
### reportConditionalDeleteCommandStatus (ConditionalDeleteCommandStatusType)
This operation is used to report the status of the current ConditionalDelete command.
