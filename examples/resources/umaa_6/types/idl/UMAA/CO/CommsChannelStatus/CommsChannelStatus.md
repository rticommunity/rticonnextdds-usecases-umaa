# CommsChannelStatus
The purpose of this service is to give status info for both sender and receiver side of a comms device. For the sending side it gives info on the messages being buffered to be sent and sender statistics related to send history. For the receiver side, it gives last message received info and statistics on the data coming through the link. It also reports other comms system status of interest.

## Requests

## Responses
### reportCommsChannel (CommsChannelReportType)
This operation is used to report the current status of the CommsChannel service.
### reportCommsChannelReceiver (CommsChannelReceiverReportType)
This operation is used to report the current status of the CommsChannelReceiver service.
### reportCommsChannelReceiverStatistics (CommsChannelReceiverStatisticsReportType)
This operation is used to report the current status of the CommsChannelReceiverStatistics service.
### reportCommsChannelSender (CommsChannelSenderReportType)
This operation is used to report the current status of the CommsChannelSender service.
### reportCommsChannelSenderStatistics (CommsChannelSenderStatisticsReportType)
This operation is used to report the current status of the CommsChannelSenderStatistics service.
