# EmitterControl
The purpose of this service is to define the parameters needed for an unmanned vehicle to control the emission state of an emitter.

## Requests
### setEmitter (EmitterCommandType)
This operation is used to set the Emitter command.

## Responses
### reportEmitterCommandAck (EmitterCommandAckReportType)
This operation is used to provide the Emitter commanded values.
### reportEmitterCommandStatus (EmitterCommandStatusType)
This operation is used to report the status of the current Emitter command.
