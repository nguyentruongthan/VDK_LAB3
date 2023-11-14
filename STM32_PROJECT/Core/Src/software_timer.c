/*
 * software_timer.c
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */

#include "software_timer.h"


uint8_t timer_1000ms_flag;
int timer_1000ms_count;
void set_timer_1000ms(int duration){
	timer_1000ms_count = duration;
	timer_1000ms_flag = 0;
}
uint8_t get_timer_1000ms_flag(){
	return timer_1000ms_flag;
}


// timer for every 0.5s if button 1 pressed than 1s
uint8_t timer_button_1_500ms_flag;
int timer_button_1_500ms_count;
void set_timer_button_1_500ms(int duration){
	timer_button_1_500ms_flag = 0;
	timer_button_1_500ms_count = duration;
}
uint8_t get_timer_button_1_500ms_flag(){
	return timer_button_1_500ms_flag;
}

// timer for every 0.5s if button 2 pressed than 1s
uint8_t timer_button_2_500ms_flag;
int timer_button_2_500ms_count;
void set_timer_button_2_500ms(int duration){
	timer_button_2_500ms_flag = 0;
	timer_button_2_500ms_count = duration;
}
uint8_t get_timer_button_2_500ms_flag(){
	return timer_button_2_500ms_flag;
}

//timer for blink single led in MODE2, 3 and 4
uint8_t timer_blink_single_led_flag;
int timer_blink_single_led_count;
void set_timer_blink_single_led(int duration){
	timer_blink_single_led_flag = 0;
	timer_blink_single_led_count = duration;
}
uint8_t get_timer_blink_single_led_flag(){
	return timer_blink_single_led_flag;
}


void timer_run(){
	timer_1000ms_count --;
	if(timer_1000ms_count <= 0){
		timer_1000ms_flag = 1;
	}

	timer_blink_single_led_count --;
	if(timer_blink_single_led_count <= 0){
		timer_blink_single_led_flag = 1;
	}

	timer_button_1_500ms_count --;
	if(timer_button_1_500ms_count <= 0){
		timer_button_1_500ms_flag = 1;
	}

	timer_button_2_500ms_count --;
	if(timer_button_2_500ms_count <= 0){
		timer_button_2_500ms_flag = 1;
	}
}
