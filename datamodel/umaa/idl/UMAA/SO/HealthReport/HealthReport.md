# HealthReport
The purpose of this service is to provide health details, which includes, but is not limited to, the health as determined from BITs (Built-In-Tests).

## Requests

## Responses
### reportHealth (HealthReportType)
This operation is used to report the most recent health status for each resource. This service is expected to report all managed resource/code pairs at all times (including reporting "NONE" severity when "No error condition exists"). Updates are required for each change event and at a configurable rate.
