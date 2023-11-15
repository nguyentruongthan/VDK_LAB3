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
	if(	traffic_state == MODE2 || traffic_state == MODE3 ||
		traffic_state == MODE4){
		traffic_led_7SEG_1 = (traffic_led_7SEG_1 % 99) + 1;
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
			// set value of traffic_led_7SEG_1 which is showed in LED7SEG first and second
			// to value of amber duration when we change state from MODE2 to MODE3
			traffic_led_7SEG_1 = amber_duration;
			break;
		case MODE3:
			traffic_state = MODE4;
			// set value of traffic_led_7SEG_1 which is showed in LED7SEG first and second
			// to value of green duration when we change state from MODE3 to MODE4
			traffic_led_7SEG_1 = green_duration;
			break;
		case MODE4:
			// setup to prepare change traffic_state to GR

			// check if duration of red equal to sum of duration of green and amber
			// if not equal, reset duration of this duration to INIT
			check_duration_led_7SEG();
			// reset value of 4 traffic to duration of state green - red
			// for we change to state GR
			traffic_led_7SEG_1 = green_duration;
			traffic_led_7SEG_2 = red_duration;
			// set timer 1000ms for use for update update value of traffic_led_7SEG_1
			// and traffic_led_7SEG_1 every one second
			set_timer_1000ms(1000/TIMER_DURATION);

			traffic_state = GR;
			break;
		default:
			traffic_state = MODE2;
			traffic_led_7SEG_1 = red_duration;
			break;
	}
}


void execute_GR(){
	//display single LED for state GREEN - LED
	single_led_for_GR();
	//update value of led 7 SEG once software timer 1000ms
	if(get_timer_1000ms_flag()){
		set_timer_1000ms(1000 / TIMER_DURATION);
		//TODO
		traffic_led_7SEG_1 --;
		traffic_led_7SEG_2 --;
		// if counter for green 1 led expert, we change state to AMBER - RED
		if(traffic_led_7SEG_1 <= 0){
			traffic_state = AR;

			//update value of two led 7 SEG first to amber_duration
			//for prepare for state AMBER - RED
			traffic_led_7SEG_1 = amber_duration;
		}
	}
}

void execute_AR(){
	//display single LED for state AMBER - RED
	single_led_for_AR();
	//update value of led 7 SEG once software timer 1000ms
	if(get_timer_1000ms_flag()){
		set_timer_1000ms(1000 / TIMER_DURATION);
		//TODO
		traffic_led_7SEG_1 --;
		traffic_led_7SEG_2 --;
		// if counter for amber 1 led expert, we change state to RED - GREEN
		if(traffic_led_7SEG_1 <= 0){
			traffic_state = RG;

			//update value of two led 7 SEG first to red_duration
			//and other two led 7 SEG to green_duration
			//for prepare for state RED - GREEN
			traffic_led_7SEG_1 = red_duration;
			traffic_led_7SEG_2 = green_duration;

		}
	}
}

void execute_RG(){
	single_led_for_RG();
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
	single_led_for_RA();
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
	//display for single led
	single_led_blink_2Hz();
}

void execute_MODE3(){
	//traffic led 7 SEG third and fourth displays number 2
	traffic_led_7SEG_2 = 3;
	//display for single led
	single_led_blink_2Hz();

}

void execute_MODE4(){
	//traffic led 7 SEG third and fourth displays number 2
	traffic_led_7SEG_2 = 4;
	//display for single led
	single_led_blink_2Hz();
}
void fsm_for_traffic_state(){
	switch(traffic_state){
	case INIT:
		traffic_state = GR;

		red_duration = RED_DURATION_INIT;
		green_duration = GREEN_DURATION_INIT;
		amber_duration = AMBER_DURATION_INIT;

		// set value of traffic_led_7SEG_1 and traffic_led_7SEG_2
		// to prepare for display in state GR
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
	//display led 7 SEG
	// update buffer for LED 7 SEG
	updateTraffic7SEGBuffer();
	// sweep LED 7 SEG
	update7SEG();
}
