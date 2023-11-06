/**
 * @file motor_manager.h
 * @author Noa Sendlhofer
 */

#ifndef PICO_MOTORS_MOTOR_MANAGER_H_
#define PICO_MOTORS_MOTOR_MANAGER_H_

#include <memory>
#include "motor.h"
#include "servo.h"
#include "enum_definitions.h"

#define MS_PER_CM 260
#define CREEP_SPEED 4000

#define TURN_SPEED 6000
#define US_PER_DEG_PER_SPEED 4.3

class MotorManager
{
public:
    MotorManager();
    //drive
    void rampSpeed(int32_t target_speed, uint16_t rate = 200) const;
    void setSpeed(int32_t set_speed) const;
    void changeDirection() const;
    void setDirection(MotorDirection direction) const;
    void turn(int16_t degrees, TurnDirection direction) const;
    void creepDistance(uint16_t distance, MotorDirection direction) const;

    //TODO pickup

    std::unique_ptr<Motor> drive_motor1;
    std::unique_ptr<Motor> drive_motor2;

    std::unique_ptr<Motor> crane_l_motor;
    std::unique_ptr<Motor> crane_r_motor;

    std::unique_ptr<Servo> crane_l_servo;
    std::unique_ptr<Servo> crane_r_servo;
};


#endif //PICO_MOTORS_MOTOR_MANAGER_H_
