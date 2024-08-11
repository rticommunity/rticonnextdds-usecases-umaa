# InertialSensorControl
The purpose of this service is to provide the control of the inertial sensor such as Inertial Navigation Unit (INU) or Inertial Measurement Unit (IMU) of the vehicle.

## Requests
### setInertialSensor (InertialSensorCommandType)
This operation is used to set the state of the inertial sensor of the vehicle.

## Responses
### reportInertialSensorCommandAck (InertialSensorCommandAckReportType)
This operation is used to provide the InertialSensor commanded values.
### reportInertialSensorCommandStatus (InertialSensorCommandStatusType)
This operation is used to report the status of the inertial sensor command.
