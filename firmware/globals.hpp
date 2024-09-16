#ifndef GLOBALS_HPP
#define GLOBALS_HPP

#include <stdint.h> // for uint16_t

// define pin numbers
#define PIN_A 10
#define PIN_NA 11
#define PIN_B 12
#define PIN_NB 13

const uint16_t MOTOR_CONTROL_COUNTS = 200;
const uint16_t UART_UPDATE_INTERVAL = 60000; 

// global variables
extern volatile int direction;        // 1 : clockwise, -1 : counter-clockwise
extern volatile bool isDirectionChanged;
extern volatile float target_velocity;

extern volatile int16_t stepper_motor_tick;

#endif // GLOBALS_HPP
