# IlluminatorControl
The purpose of this service is to control Illuminators, e.g., turn on/off and controlling the light characteristics.

## Requests
### setIlluminator (IlluminatorCommandType)
This operation is used to set the intensity and beam width of an illuminator.

## Responses
### reportIlluminatorCommandAck (IlluminatorCommandAckReportType)
This operation is used to provide the Illuminator commanded values.
### reportIlluminatorCommandStatus (IlluminatorCommandStatusType)
This operation is used to report the status of an illuminator command.
