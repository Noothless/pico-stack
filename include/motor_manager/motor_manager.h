/**
 * @file motor_manager.h
 * @author Noa Sendlhofer
 */

#ifndef PICO_MOTORS_MOTOR_MANAGER_H_
#define PICO_MOTORS_MOTOR_MANAGER_H_

#include <memory>
#include "motor_driver.h"

enum Direction
{
    DIR_FORWARD,
    DIR_BACKWARD,
    DIR_LEFT,
    DIR_RIGHT,
};

#define MS_PER_CM 290
#define MS_PER_DEG 18

class MotorManager
{
public:
    MotorManager();
    void setSpeed(uint32_t target_speed, uint16_t rate = 200);
    void changeDirection();
    void setDirection(MotorDirection direction);
    void turn(uint16_t degrees, Direction direction);
    void creepDistance(uint16_t distance, MotorDirection direction);

    std::unique_ptr<Motor> motor1;
    std::unique_ptr<Motor> motor2;
};


#endif //PICO_MOTORS_MOTOR_MANAGER_H_