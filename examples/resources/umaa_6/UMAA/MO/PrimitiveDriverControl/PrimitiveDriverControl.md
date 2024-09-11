# PrimitiveDriverControl
This service provides mobility in six degrees of freedom using a percent of available effort in each direction. Additionally, no power plant is implied and the service functions strictly in an open loop manner, i.e., a velocity is not commanded or held since that requires a speed sensor. The service definition makes no assertion about the preventative actions that must be taken to avoid unintended consequences, such as losing positive control when given a zero propulsive effort. This service uses "effort" as a relative measure of the amount of drive power. This measure is intentionally kept agnostic of the underlying control system for portability across hardware types. As a result, the implementation of an "effort" driver may map the request to a percent of maximum current of an electric motor, fluid pressure of a hydraulic system, duty-cycle of a pulse-width modulated controller, or position of a control lever. These examples are meant to be illustrative; the actual mapping is not restricted so long as it can be expressed as a percent of some maximum.

## Requests
### setPrimitiveDriver (PrimitiveDriverCommandType)
This operation is used to set the mobility of the vehicle using the effort. The consumer must perform a cancel of the command to initiate the end of command execution as this command has no determinate end of execution.

## Responses
### reportPrimitiveDriverCommandAck (PrimitiveDriverCommandAckReportType)
This operation is used to report the current effort command.
### reportPrimitiveDriverCommandStatus (PrimitiveDriverCommandStatusType)
This operation is used to report the status of the effort command.
### reportPrimitiveDriverExecutionStatus (PrimitiveDriverExecutionStatusReportType)
This operation is used to report the current mobility in the vehicle coordinate frame.
