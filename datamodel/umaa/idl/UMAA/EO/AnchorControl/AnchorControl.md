# AnchorControl
The purpose of this service is to provide the operations and interfaces to control the anchor on the vehicle. Three modes of operation: stop, lower, and raise are supported per anchor.  When canceled, stops at current position.

## Requests
### setAnchor (AnchorCommandType)
This operation is used to set the control parameters for the Anchor service.

## Responses
### reportAnchorCommandAck (AnchorCommandAckReportType)
This operation is used to provide the Anchor commanded values.
### reportAnchorCommandStatus (AnchorCommandStatusType)
This operation is used to report the status of the associated command message.
