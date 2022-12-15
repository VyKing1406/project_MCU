/*
 * button.c
 *
 *  Created on: Oct 21, 2022
 *      Author: Vuong
 */

#include "input_processing.h"



//buffer save duration of led
void button_process(int index) {
	switch (index) {
	case 1:
		HAL_GPIO_TogglePin(Led_11_GPIO_Port, Led_11_Pin);
		break;
	case 2:
		HAL_GPIO_TogglePin(Led_12_GPIO_Port, Led_12_Pin);
		break;
	case 3:
		HAL_GPIO_TogglePin(Led_21_GPIO_Port, Led_21_Pin);
		break;
	case 4:
		HAL_GPIO_TogglePin(Led_22_GPIO_Port, Led_22_Pin);
		break;
	default:
		break;
	}
}

//void add_MODE()
//{
//	MODE++;
//
//	if(MODE==5) MODE=1;
//	if(MODE==1){
//		led_index_1 = 0;
//		led_index_2 = 2;
//	}
//	else if(MODE!=1)
//	{
//		HAL_GPIO_WritePin(GPIOB,
//						Red_1_Pin | Green_1_Pin | Yellow_1_Pin | Pin_Led_2[1]
//								| Pin_Led_1[2] | Pin_Led_2[2], 1);
//	}
//	display_led(MODE);
//	return;
//}
//
//
//
////This function will be call if add button is pressesed
////simply increase the value of buffer_led corresponding
////to the mode and decrease it to 0 if greater than 99
//void add_buffer(int MODE)
//{
//	buffer_led[MODE - 2]++;//
//	if (buffer_led[MODE - 2] > 99) {
//		buffer_led[MODE - 2] = 0;
//	}
//	return;
//}
//
//// because don't have button to cancel value of add button so....
//// confirm button only transfer Mode to 1
////set index to control hori and verti
//void confirm()
//{
//	MODE=1;
//	led_index_1 = 0;
//	led_index_2 = 2;
//}
//

