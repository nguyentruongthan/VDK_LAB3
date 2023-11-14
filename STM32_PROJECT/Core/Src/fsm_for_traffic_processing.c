/*
 * fsm_for_traffic_processing.c
 *
 *  Created on: Nov 14, 2023
 *      Author: than
 */

#include "fsm_for_traffic_processing.h"




void set_traffic_led_7SEG_duration_using_button_3(){
	switch(traffic_state){
	case MODE2:
		red_duration = traffic_led_7SEG_1;
		break;
	case MODE3:
		amber_duration = traffic_led_7SEG_1;
		break;
	case MODE4:
		green_duration = traffic_led_7SEG_1;
		break;
	default:break;
	}
}


void increase_traffic_led_7SEG_using_button_2(){
	if(	traffic_state == GR || traffic_state == AR ||
		traffic_state == RG || traffic_state == RA ){
		traffic_led_7SEG_1 ++;
	}
}

// check if duration of red equal to sum of duration of green and amber
// if not equal, reset duration of this duration to INIT
void check_duration_led_7SEG(){
	if(red_duration != green_duration + amber_duration){
		red_duration = RED_DURATION_INIT;
		green_duration = GREEN_DURATION_INIT;
		amber_duration = AMBER_DURATION_INIT;
	}
}

void update_traffic_state_using_button_1(){
	switch(traffic_state){
		case MODE2:
			traffic_state = MODE3;
			break;
		case MODE3:
			traffic_state = MODE4;
			break;
		case MODE4:
			// setup to prepare change traffic_state to GR
			// check if duration of red equal to sum of duration of green and amber
			// if not equal, reset duration of this duration to INIT
			check_duration_led_7SEG();
			// reset value of 4 traffic to duration of state green - red
			traffic_led_7SEG_1 = green_duration;
			traffic_led_7SEG_2 = red_duration;
			// set timer 1000ms
			set_timer_1000ms(1000/TIMER_DURATION);

			traffic_state = GR;
			break;
		default:
			traffic_state = MODE2;
			break;
	}
}


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

void execute_MODE2(){
	//traffic led 7 SEG third and fourth displays number 2
	traffic_led_7SEG_2 = 2;

	//update traffic led 7 SEG first and second every press button 2

}

void execute_MODE3(){
	//traffic led 7 SEG third and fourth displays number 2
	traffic_led_7SEG_2 = 3;

	//update traffic led 7 SEG first and second every press button 2

}

void execute_MODE4(){
	//traffic led 7 SEG third and fourth displays number 2
	traffic_led_7SEG_2 = 4;

	//update traffic led 7 SEG first and second every press button 2

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
	case MODE2:
		execute_MODE2();
		break;
	case MODE3:
		execute_MODE3();
		break;
	case MODE4:
		execute_MODE4();
		break;
	default: break;
	}
}
