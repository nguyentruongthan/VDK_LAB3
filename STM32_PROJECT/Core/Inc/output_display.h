/*
 * output_display.h
 *
 *  Created on: Nov 14, 2023
 *      Author: than
 */

#ifndef INC_OUTPUT_DISPLAY_H_
#define INC_OUTPUT_DISPLAY_H_


#include "global.h"

void update7SEG();
void updateTraffic7SEGBuffer();

void single_led_for_RG();
void single_led_for_RA();
void single_led_for_GR();
void single_led_for_AR();
void single_led_blink_2Hz();

#endif /* INC_OUTPUT_DISPLAY_H_ */
