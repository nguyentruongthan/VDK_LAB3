/*
 * global.h
 *
 *  Created on: Nov 13, 2023
 *      Author: than
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "input_reading.h"
#include "output_display.h"
#include "fsm_for_input_processing.h"
#include "fsm_for_traffic_processing.h"

uint32_t TIMER_DURATION;//ms


#define INIT 		0
#define RG 			1
#define RA 			2
#define GR			3
#define AR			4
#define MODE2		5
#define MODE3		6
#define MODE4		7


//initial time duration of red, green and amber
//if change from MODE4 to GR but duration of red not
//equal to green plus amber
//we will assign duration of it by this initial value
#define RED_DURATION_INIT		8
#define GREEN_DURATION_INIT		5
#define AMBER_DURATION_INIT		3

//time duration of red, green and amber
uint8_t red_duration;
uint8_t green_duration;
uint8_t amber_duration;

//state of MODE in fsm_system
//contains value: INIT, AR, GR, RA, RG, MODE2, MODE3 and MODE4
uint8_t traffic_state;

//value using display LED 7 SEG first and second
uint8_t traffic_led_7SEG_1;
//value using display LED 7 SEG third and fourth
uint8_t traffic_led_7SEG_2;

#endif /* INC_GLOBAL_H_ */
