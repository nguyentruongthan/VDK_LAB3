/*
 * input_reading.h
 *
 *  Created on: Nov 14, 2023
 *      Author: than
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_


#include "global.h"

// we aim to work with more than one buttons
#define N0_OF_BUTTONS 3

void button_reading(void);
unsigned char is_button_pressed(unsigned char index);
unsigned char is_button_pressed_1s(unsigned char index);


#endif /* INC_INPUT_READING_H_ */
