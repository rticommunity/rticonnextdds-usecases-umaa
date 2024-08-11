# PropulsorsControl
The purpose of this service is to provide the operations and interfaces to control the vehicle propulsors. A propulsor is assumed to be any mechanical device that gives propulsion, such as thrusters, propellers, water jets, etc. that is either fixed or has up to two articulations.

## Requests
### setPropulsors (PropulsorsCommandType)
This operation is used to control a set of one or more propulsors on the vehicle. The consumer must perform a cancel of the command to initiate the end of command execution as this command has no determinate end of execution.

## Responses
### reportPropulsorsCommandAck (PropulsorsCommandAckReportType)
This operation is used to provide the Propulsors commanded values.
### reportPropulsorsCommandStatus (PropulsorsCommandStatusType)
This operation is used to report the status of the propulsor configuration command.
