# HazardAvoidanceConfig
The purpose of this service is to report the desired hazard avoidance configuration for individual contacts.  The service maps contact IDs to desired hazard avoidance parameters for that particular contact. All service implementations are required to always report a Nil UUID that maps to the default parameters for any contact ID where a configuration is not explicitly defined.

## Requests

## Responses
### reportHazardAvoidanceConfig (HazardAvoidanceConfigReportType)
This operation is used to report the hazard avoidance configuration parameters.
