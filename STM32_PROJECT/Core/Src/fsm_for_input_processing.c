/*
 * fsm_for_input_processing.c
 *
 *  Created on: Nov 14, 2023
 *      Author: than
 */

#include "fsm_for_input_processing.h"


#define BUTTON_RELEASED 0
#define BUTTON_PRESSED 1
#define BUTTON_PRESSED_MORE_THAN_1_SECOND 2

uint8_t buttonState[N0_OF_BUTTONS] = {BUTTON_RELEASED, BUTTON_RELEASED, BUTTON_RELEASED};


void fsm_for_input_1_processing(void){
	switch(buttonState[0]){
	case BUTTON_RELEASED :
		if(is_button_pressed(0)){
			buttonState[0] = BUTTON_PRESSED ;
			//TODO
			update_traffic_state_using_button_1();
		}
		break ;
	case BUTTON_PRESSED :
		if(!is_button_pressed(0)) {
			buttonState[0] = BUTTON_RELEASED ;
		}else {
			if(is_button_pressed_1s(0)){
				buttonState[0] = BUTTON_PRESSED_MORE_THAN_1_SECOND;
				//TODO for first time BUTTON_PRESSED_MORE_THAN_1_SECOND
				set_timer_button_1_500ms(500/TIMER_DURATION);
				update_traffic_state_using_button_1();
			}
		}
		break ;
	case BUTTON_PRESSED_MORE_THAN_1_SECOND:
		if(!is_button_pressed(0)){
			buttonState[0] = BUTTON_RELEASED;
		}
		// set timer 500ms, if flag for timer 500ms is set -> DO something
		// TODO
		if(get_timer_button_1_500ms_flag()){
			set_timer_button_1_500ms(500/TIMER_DURATION);
			//TODO
			update_traffic_state_using_button_1();
		}
		break ;
	}
}


void fsm_for_input_2_processing(void){
	switch(buttonState[1]){
	case BUTTON_RELEASED:
		if(is_button_pressed(1)){
			buttonState[1] = BUTTON_PRESSED ;
			//TODO
			increase_traffic_led_7SEG_using_button_2();
		}
		break ;
	case BUTTON_PRESSED :
		if(!is_button_pressed(1)) {
			buttonState[1] = BUTTON_RELEASED ;
		}else {
			if(is_button_pressed_1s(1)){
				buttonState[1] = BUTTON_PRESSED_MORE_THAN_1_SECOND;
				//TODO for first time BUTTON_PRESSED_MORE_THAN_1_SECOND
				set_timer_button_2_500ms(500/TIMER_DURATION);
				increase_traffic_led_7SEG_using_button_2();
			}
		}
		break ;
	case BUTTON_PRESSED_MORE_THAN_1_SECOND:
		if(!is_button_pressed(1)){
			buttonState[1] = BUTTON_RELEASED;
		}
		// set timer 500ms, if flag for timer 500ms is set -> DO something
		// TODO
		if(get_timer_button_2_500ms_flag()){
			set_timer_button_2_500ms(500/TIMER_DURATION);
			//TODO
			increase_traffic_led_7SEG_using_button_2();
		}
		break ;
	}
}

void fsm_for_input_3_processing(){
	switch(buttonState[2]){
	case BUTTON_RELEASED:
		if(is_button_pressed(2)){
			buttonState[2] = BUTTON_PRESSED ;
			//TODO
			set_traffic_led_7SEG_duration_using_button_3();
		}
		break ;
	case BUTTON_PRESSED :
		if(!is_button_pressed(2)) {
			buttonState[2] = BUTTON_RELEASED ;
		}
		break;
	default: break;
	}
}


