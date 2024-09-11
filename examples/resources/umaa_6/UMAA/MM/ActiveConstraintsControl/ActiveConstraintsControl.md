# ActiveConstraintsControl
The purpose of this service is to provide a set of active constraints. Constraints are specified using conditional statements, where the conditional statements must be kept true while executing any actions.

## Requests
### setActiveConstraints (ActiveConstraintsCommandType)
This operation is used to set the ActiveConstraints command.

## Responses
### reportActiveConstraintsCommandAck (ActiveConstraintsCommandAckReportType)
This operation is used to provide the ActiveConstraints commanded values.
### reportActiveConstraintsCommandStatus (ActiveConstraintsCommandStatusType)
This operation is used to report the status of the current ActiveConstraints command.
