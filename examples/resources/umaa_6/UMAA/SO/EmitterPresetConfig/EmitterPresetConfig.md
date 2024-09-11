# EmitterPresetConfig
The purpose of this service is to define the parameters needed for an unmanned vehicle to define the configuration of one or more emission levels. Each level defines a list of emitters that must be secured from generating any emissions and a list of emitters that are allowed to generate emissions as needed. If an emitter is not in either list, then it is assumed that there is no required change in its emission state for that particular emission level.

## Requests
### cancelEmitterPresetConfig (EmitterPresetCancelConfigType)
This operation is used to nullify the current configuration command.
### setEmitterPresetConfig (EmitterPresetConfigCommandType)
This operation is used to set the EmitterPresetConfig command.

## Responses
### reportEmitterPresetCancelConfigCommandStatus (EmitterPresetCancelConfigCommandStatusType)
This operation is used to report the status of the nullification of the current configuration command.
### reportEmitterPresetConfig (EmitterPresetConfigReportType)
This operation is used to report the current status of the EmitterPresetConfig service.
### reportEmitterPresetConfigAck (EmitterPresetConfigAckReportType)
This operation is used to report the current EmitterPreset configuration.
### reportEmitterPresetConfigCommandStatus (EmitterPresetConfigCommandStatusType)
This operation is used to report the status of the current EmitterPresetConfig command.
