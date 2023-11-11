/**
 * @file enum_definitions.h
 * @author Noa Sendlhofer
 */

#ifndef PICO_MOTORS_ENUM_DEFINITIONS_H_
#define PICO_MOTORS_ENUM_DEFINITIONS_H_

enum DriveSpeed
{
    SPEED_STRAIGHT,
    SPEED_CURVE,
};

enum LineSide
{
    DETECT_LEFT,
    DETECT_RIGHT,
};

enum PickUpSide
{
    PICKUP_LEFT,
    PICKUP_RIGHT,
};

enum TurnDirection
{
    LEFT,
    RIGHT,
};

enum MotorDirection
{
    FORWARD,
    BACKWARD,
    STOP,
};

enum LineType
{
    STRAIGHT,
    CURVE_LEFT,
    CURVE_RIGHT,
};

enum GameMessage
{
    NOTIFY_READY,
    NOTIFY_CALIBRATE,
    NOTIFY_LINE,
    NOTIFY_ALIGN,
    NOTIFY_TRASH,
    NOTIFY_RESUME,
    NOTIFY_UNLOAD,
    REQUEST_CALIBRATE,
    REQUEST_DRIVE_STRAIGHT,
    REQUEST_DRIVE_CURVE,
    REQUEST_LINE_LEFT,
    REQUEST_LINE_RIGHT,
    REQUEST_ALIGN_STRAIGHT,
    REQUEST_ALIGN_CURVE_LEFT,
    REQUEST_ALIGN_CURVE_RIGHT,
    REQUEST_RESUME_CURVE_LEFT,
    REQUEST_RESUME_CURVE_RIGHT,
    REQUEST_PICKUP_LEFT,
    REQUEST_PICKUP_RIGHT,
    REQUEST_UNLOAD,
    REQUEST_MIXER_ON,
    REQUEST_MIXER_OFF,
};

enum GameItems
{
    CALIBRATE,
    DRIVE_STRAIGHT,
    DRIVE_CURVE,
    DRIVE_GATE,
    LINE_LEFT,
    LINE_RIGHT,
    ALIGN_STRAIGHT,
    ALIGN_CURVE_LEFT,
    ALIGN_CURVE_RIGHT,
    RESUME_CURVE_LEFT,
    RESUME_CURVE_RIGHT,
    TRASH_LEFT,
    TRASH_RIGHT,
    UNLOAD,
    MIXER_ON,
    MIXER_OFF,
};

enum SensorPosition
{
    SENSOR_FLI,
    SENSOR_FRI,
    SENSOR_FLO,
    SENSOR_FRO,
    SENSOR_CLI,
    SENSOR_CRI,
    SENSOR_CLO,
    SENSOR_CRO,
    SENSOR_BLI,
    SENSOR_BRI,
    SENSOR_BLO,
    SENSOR_BRO,
};

enum SensorRow
{
    SENSOR_ROW_FRONT,
    SENSOR_ROW_CENTER,
    SENSOR_ROW_BACK,
};

#endif //PICO_MOTORS_ENUM_DEFINITIONS_H_
