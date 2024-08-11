# ResourceAllocation
This service provides the interfaces necessary for attempting exclusive control of a resource, setting the priority ordering of resource consumers, and retrieving the current configuration and control information for a resource.

## Requests
### setResourceAllocation (ResourceAllocationCommandType)
This operation is used to set the current resource allocation command. The source attribute in the header of this command is used to identify the consumer that is requesting the resource to be allocated.
### setResourceAllocationPriority (ResourceAllocationPriorityCommandType)
This operation is used to set the ordered priority of consumers who will be requesting access. All potential consumers must be on this list to be enabled to request control allocation.

## Responses
### reportResourceAllocation (ResourceAllocationReportType)
This operation is used to report the current resources and what consumer currently owns each resource.
### reportResourceAllocationCommandAck (ResourceAllocationCommandAckReportType)
This operation is used to provide the ResourceAllocation commanded values.
### reportResourceAllocationCommandStatus (ResourceAllocationCommandStatusType)
This operation is used to report the status of the current resource allocation command.
### reportResourceAllocationConfig (ResourceAllocationConfigReportType)
This operation is used to report all service provider identifiers that are sharing a single resource.
### reportResourceAllocationPriority (ResourceAllocationPriorityReportType)
This operation is used to report the current priority ordering of resource consumers.
### reportResourceAllocationPriorityCommandAck (ResourceAllocationPriorityCommandAckReportType)
This operation is used to provide the ResourceAllocationPriority commanded values.
### reportResourceAllocationPriorityCommandStatus (ResourceAllocationPriorityCommandStatusType)
This operation is used to report the status of the current priority command.
