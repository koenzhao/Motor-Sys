#include "includes.h"
/*void Keyboard_Scan()
{
	uchar state;
	P3 = P3 | 0x07;
	state = P3 & 0x07;
	delay_ms(5);
	if (state == P3 & 0x07)
	{
		delay_ms(5);
		if (state == P3 & 0x07)
		{
			switch (state)
			{
				case 0x03:
					Motor_Hight++;
					LCD_Display(0x80,"KEY1");
					break;
				case 0x05:
					Motor_Hight--;
					LCD_Display(0x80,"KEY2");
					break;
				case 0x06:
					Motor_IN1 = ~Motor_IN1;
					Motor_IN2 = ~Motor_IN2;
					LCD_Display(0x80,"KEY3");
					break;
			}
		}
	}
} */

/*void Keyboard_Scan()
{
	Key_Increaes = 1;
	Key_Decrease = 1;
	Key_Rollback = 1;
	if(Key_Increaes == 0)
	{
		delay_ms(10);
		if(Key_Increaes == 0)
		{
			//LCD_Display(0x80,"KEY1");
			Motor_Hight++;
			if(Motor_Hight >= 100)
			{
				Motor_Hight = 100;
			}
			while(!Key_Increaes);
		}
	}
	if(Key_Decrease == 0)
	{
		delay_ms(10);
		if(Key_Decrease == 0)
		{
			//LCD_Display(0x80,"KEY2");
			Motor_Hight--;
			if(Motor_Hight <= 1)
			{
				Motor_Hight = 1;
			}
			while(!Key_Decrease);
		}
	}
	if(Key_Rollback == 0)
	{
		delay_ms(10);
		if(Key_Rollback == 0)
		{
			//LCD_Display(0x80,"KEY3");
			Motor_IN1 = ~Motor_IN1;
			Motor_IN2 = ~Motor_IN2;
			while(!Key_Rollback);
		}
	}
	if(Key_Stop == 0)
	{
		delay_ms(10);
		if(Key_Stop == 0)
		{
			//LCD_Display(0x80,"KEY3");
			Motor_Hight = 1;
			//Send_Data(2);
			while(!Key_Stop);
		}
	}

} */