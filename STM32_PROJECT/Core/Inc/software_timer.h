/*
 * software_timer.h
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
#include "global.h"


// timer 1000 ms
void set_timer_1000ms(int duration);
uint8_t get_timer_1000ms_flag();

// timer for every 0.5s if button 1 pressed than 1s
void set_timer_button_1_500ms(int duration);
uint8_t get_timer_button_1_500ms_flag();

// timer for every 0.5s if button 2 pressed than 1s
void set_timer_button_2_500ms(int duration);
uint8_t get_timer_button_2_500ms_flag();

//timer for blink single led in MODE2, 3 and 4
void set_timer_blink_single_led(int duration);
uint8_t get_timer_blink_single_led_flag();

void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
