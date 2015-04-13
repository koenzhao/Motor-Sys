#include "includes.h"

void main()
{
	Motor_Init();
	lcd_init();
	Timer_Ext_UART_Init();
	while(1)
	{										   
		Keyboard_Scan();
		itoa(Encoder_Speed,speed);
		itoa(Motor_Hight,high);
		LCD_Display(0x80+0x06, speed);
		LCD_Display(0x80+0x40, high);
		Send_Data(Motor_Hight);
		//Send_Data(Encoder_Speed);
		
	}
	
}