# TamperDetectionControl
The purpose of this service is to provide a mechanism to enable or disable tamper detection.

## Requests
### setTamperDetection (TamperDetectionCommandType)
This operation is used to enable or disable tamper detection and to clear the previously reported activities.

## Responses
### reportTamperDetectionCommandAck (TamperDetectionCommandAckReportType)
This operation is used to provide the TamperDetection commanded values.
### reportTamperDetectionCommandStatus (TamperDetectionCommandStatusType)
This operation is used to report the status of the tamper detection command.
