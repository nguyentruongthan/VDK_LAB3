/*
 * output_display.c
 *
 *  Created on: Nov 14, 2023
 *      Author: than
 */



#include "output_display.h"


void display7SEG(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, SET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
		break;
	default:
		break;
	}
}


const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1,2,3,4};
void update7SEG(){
	if(get_timer_sweep_led_7_seg_flag()){
		set_timer_sweep_led_7_seg(100/TIMER_DURATION);
		//TODO
		display7SEG(led_buffer[index_led]);
		switch(index_led){
		case 0:
			// Display the first 7 SEG with led_buffer [0]
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			break;
		case 1:
			// Display the first 7 SEG with led_buffer [1]
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			break;
		default: break;
		}
		index_led = (index_led + 1) % MAX_LED;
	}
}

void updateTraffic7SEGBuffer(){
	led_buffer[0] = traffic_led_7SEG_1 / 10;
	led_buffer[1] = traffic_led_7SEG_1 % 10;
	led_buffer[2] = traffic_led_7SEG_2 / 10;
	led_buffer[3] = traffic_led_7SEG_2 % 10;
}



void single_led_for_RG(){
	//TRAFFIC LIGHT 1
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AMBER_1_GPIO_Port, AMBER_1_Pin, GPIO_PIN_RESET);

	//TRAFFIC LIGHT 2
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(AMBER_2_GPIO_Port, AMBER_2_Pin, GPIO_PIN_RESET);
}

void single_led_for_RA(){
	//TRAFFIC LIGHT 1
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AMBER_1_GPIO_Port, AMBER_1_Pin, GPIO_PIN_RESET);

	//TRAFFIC LIGHT 2
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AMBER_2_GPIO_Port, AMBER_2_Pin, GPIO_PIN_SET);
}

void single_led_for_GR(){
	//TRAFFIC LIGHT 1
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(AMBER_1_GPIO_Port, AMBER_1_Pin, GPIO_PIN_RESET);

	//TRAFFIC LIGHT 2
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AMBER_2_GPIO_Port, AMBER_2_Pin, GPIO_PIN_RESET);
}

void single_led_for_AR(){
	//TRAFFIC LIGHT 1
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AMBER_1_GPIO_Port, AMBER_1_Pin, GPIO_PIN_SET);

	//TRAFFIC LIGHT 2
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AMBER_2_GPIO_Port, AMBER_2_Pin, GPIO_PIN_RESET);
}


void turn_on_all_single_led(){
	//TRAFFIC LIGHT 1
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(AMBER_1_GPIO_Port, AMBER_1_Pin, GPIO_PIN_SET);

	//TRAFFIC LIGHT 2
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(AMBER_2_GPIO_Port, AMBER_2_Pin, GPIO_PIN_SET);
}

void turn_off_all_single_led(){
	//TRAFFIC LIGHT 1
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AMBER_1_GPIO_Port, AMBER_1_Pin, GPIO_PIN_RESET);

	//TRAFFIC LIGHT 2
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(AMBER_2_GPIO_Port, AMBER_2_Pin, GPIO_PIN_RESET);
}

uint8_t state_single_led_blink = 0;
void single_led_blink_2Hz(){
	switch(state_single_led_blink){
	case 0:
		if(get_timer_blink_single_led_2Hz_flag()){
			//change state of led blink to turn on
			state_single_led_blink = 1;

			//set timer for turn on duration
			int T_OFF = (500 / 2) / TIMER_DURATION;
			int T_ON = (500 / TIMER_DURATION) - T_OFF;

			set_timer_blink_single_led_2Hz(T_ON);
		}
		//TODO
		turn_off_all_single_led();
		break;
	case 1:
		if(get_timer_blink_single_led_2Hz_flag()){
			//change state of led blink to turn off
			state_single_led_blink = 0;

			//set timer for turn off duration
			int T_OFF = (500 / 2) / TIMER_DURATION;

			set_timer_blink_single_led_2Hz(T_OFF);
		}
		//TODO
		turn_on_all_single_led();
		break;
	default:
		break;
	}
}

void fsm_for_single_led(){
	switch(traffic_state){
	case RG:
		single_led_for_RG();
		break;
	case RA:
		single_led_for_RA();
		break;
	case GR:
		single_led_for_GR();
		break;
	case AR:
		single_led_for_AR();
		break;
	default:
		single_led_blink_2Hz();
		break;
	}
}

void fsm_for_led_7_seg(){
	switch(traffic_state){
	case MODE2:
		updateTraffic7SEGBuffer();
		break;
	case MODE3:
		updateTraffic7SEGBuffer();
		break;
	case MODE4:
		updateTraffic7SEGBuffer();
		break;
	default:
		updateTraffic7SEGBuffer();
		break;
	}
	update7SEG();
}
