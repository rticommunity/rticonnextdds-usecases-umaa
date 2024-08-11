# BallastTank
The purpose of this service is to provide the operations and interfaces to control and monitor the ballast tanks and their supporting pumps on the vehicle.

## Requests
### setBallastPump (BallastPumpCommandType)
This operation is used to set the BallastPump command.
### setBallastTank (BallastTankCommandType)
This operation is used to set the BallastTank command.

## Responses
### reportBallastPump (BallastPumpReportType)
This operation is used to report the current status of the ballast pumps on the vehicle.
### reportBallastPumpCommandAck (BallastPumpCommandAckReportType)
This operation is used to provide the BallastPump commanded values.
### reportBallastPumpCommandStatus (BallastPumpCommandStatusType)
This operation is used to report the status of the current BallastPump command.
### reportBallastPumpSpecs (BallastPumpSpecsReportType)
This operation is used to report the specifications of the ballast pumps on the vehicle.
### reportBallastTank (BallastTankReportType)
This operation is used to report the current status of the ballast tanks on the vehicle.
### reportBallastTankCommandAck (BallastTankCommandAckReportType)
This operation is used to provide the BallastTank commanded values.
### reportBallastTankCommandStatus (BallastTankCommandStatusType)
This operation is used to report the status of the current BallastTank command.
### reportBallastTankSpecs (BallastTankSpecsReportType)
This operation is used to report the specifications of the ballast tanks on the vehicle.
