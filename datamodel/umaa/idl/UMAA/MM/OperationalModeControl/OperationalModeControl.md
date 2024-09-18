# OperationalModeControl
The purpose of this service is to define the parameters needed to control the operational mode, where the mode determines if associated operational commands are allowed to execute. Note that the associated operational commands are not specified by the service interface, and is therefore determined by some other mechanism (e.g., a configuration file). The modes can be grouped as either manned or unmanned (see state transition diagram). There is a single unmanned mode, MANUAL, where all commands are physically unable to be executed, and is therefore assumed to be manually operated by persons onboard. There are three unmanned modes: STANDBY, REMOTE and AUTONOMOUS. In STANDBY mode, no commands are allowed to execute, i.e., all associated commands received must fail. In REMOTE mode, only commands received from an off board operator are executed, and all associated commands received from onboard autonomy must fail. In AUTONOMOUS mode, commands received from onboard autonomy are allowed to execute. The state transition diagram shows all allowable transitions. Note that transition to/from MANUAL mode is not determined by the service interface and is therefore handled by some other mechanism (e.g., a physical switch). Also note that transition to REMOTE mode can either occur using the service command or by receiving an associated operational command from an off board operator (i.e., commands from the off board operator always have precedence over onboard autonomy).

## Requests
### setOperationalMode (OperationalModeCommandType)
This operation is used to set the OperationalMode command.

## Responses
### reportOperationalModeCommandAck (OperationalModeCommandAckReportType)
This operation is used to provide the OperationalMode commanded values.
### reportOperationalModeCommandStatus (OperationalModeCommandStatusType)
This operation is used to report the status of the current OperationalMode command.
