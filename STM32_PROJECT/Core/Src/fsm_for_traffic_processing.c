/*
 * fsm_for_traffic_processing.c
 *
 *  Created on: Nov 14, 2023
 *      Author: than
 */

#include "fsm_for_traffic_processing.h"

void execute_GR(){
	if(get_timer_1000ms_flag()){
		set_timer_1000ms(1000 / TIMER_DURATION);
		//TODO
		traffic_led_7SEG_1 --;
		traffic_led_7SEG_2 --;
		// if counter for green 1 led expert, we change state to AMBER - RED
		if(traffic_led_7SEG_1 <= 0){
			traffic_state = AR;

			traffic_led_7SEG_1 = amber_duration;
		}
	}
}

void execute_AR(){
	if(get_timer_1000ms_flag()){
		set_timer_1000ms(1000 / TIMER_DURATION);
		//TODO
		traffic_led_7SEG_1 --;
		traffic_led_7SEG_2 --;
		// if counter for amber 1 led expert, we change state to RED - GREEN
		if(traffic_led_7SEG_1 <= 0){
			traffic_state = RG;

			traffic_led_7SEG_1 = red_duration;
			traffic_led_7SEG_2 = green_duration;
		}
	}
}

void execute_RG(){
	if(get_timer_1000ms_flag()){
		set_timer_1000ms(1000 / TIMER_DURATION);
		//TODO
		traffic_led_7SEG_1 --;
		traffic_led_7SEG_2 --;
		// if counter for green 2 led expert, we change state to RED - AMBER
		if(traffic_led_7SEG_2 <= 0){
			traffic_state = RA;

			traffic_led_7SEG_2 = amber_duration;
		}
	}
}

void execute_RA(){
	if(get_timer_1000ms_flag()){
		set_timer_1000ms(1000 / TIMER_DURATION);
		//TODO
		traffic_led_7SEG_1 --;
		traffic_led_7SEG_2 --;
		// if counter for amber 2 led expert, we change state to RED - AMBER
		if(traffic_led_7SEG_2 <= 0){
			traffic_state = GR;

			traffic_led_7SEG_1 = green_duration;
			traffic_led_7SEG_2 = red_duration;
		}
	}
}
void fsm_for_traffic_state(){
	switch(traffic_state){
	case INIT:
		traffic_state = GR;

		red_duration = RED_DURATION_INIT;
		green_duration = GREEN_DURATION_INIT;
		amber_duration = AMBER_DURATION_INIT;

		traffic_led_7SEG_1 = green_duration;
		traffic_led_7SEG_2 = red_duration;

		break;
	case GR:
		execute_GR();
		break;
	case AR:
		execute_AR();
		break;
	case RG:
		execute_RG();
		break;
	case RA:
		execute_RA();
		break;
	default: break;
	}
}
