# TamperDetectionStatus
The purpose of this service is to provide a mechanism to report when tampering has occurred.

## Requests

## Responses
### reportTamperDetection (TamperDetectionReportType)
This operation is used to report the current status of anti-tamper detection. Detected activities are continuously reported until cleared by a setTamperDetectionState message.
