# ControlSystemID
The purpose of this service is to report the information of a control system and its client(s).

## Requests
### setControlSystemID (ControlSystemIDCommandType)
This operation is used to set the control system ID for an service that might not know it.

## Responses
### reportClientID (ClientIDReportType)
This operation is used to report the information of client(s) within a control system.
### reportControlSystemID (ControlSystemIDReportType)
This operation is used to report the information of a control system.
### reportControlSystemIDCommandAck (ControlSystemIDCommandAckReportType)
This operation is used to provide the ControlSystemID commanded values.
### reportControlSystemIDCommandStatus (ControlSystemIDCommandStatusType)
This operation is used to report the status of the set control system ID command.
