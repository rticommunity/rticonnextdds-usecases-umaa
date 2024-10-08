# BilgePumpStatus
The purpose of this service is to provide the operations and interfaces to monitor the bilge pumps on the vehicle. Three modes of operation, Off, On, and Auto are supported per bilge pump. The auto mode means the pump will automatically be turned on by the service when flood is detected in its responsible area. Note: Flood and leak reporting is provided by the Compartment Sensor Service.

## Requests

## Responses
### reportBilgePump (BilgePumpReportType)
This operation is used to report the current state of the bilge pumps on the vehicle.
