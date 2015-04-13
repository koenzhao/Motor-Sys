#include "includes.h"

uint Motor_Period = 100;
uint Motor_Hight = 50;
uint Motor_Hights = 50;
char high[4] = {'0','0','0','%'};
//int Encoder_i = 0;

void Motor_Init()
{
	Motor_IN1 = 1;
	Motor_IN2 = 0;
	Motor_EN = 1;
}
void Interrupt_T0() interrupt 1	 //PWM
{
	Motor_Hights--;
	if(Motor_Hights == 0)
	{
		Motor_EN = 0;
	   	Motor_Hights = 1;
	} 
	
	Motor_Period--;
	if(Motor_Period == 0)
	{
		Motor_EN = 1;
		Motor_Period = 100;
		Motor_Hights = Motor_Hight;
	}
	/*Encoder_i++;
	if(Encoder_i == 20000)
	{
		Encoder_i = 0;
		Encoder_Speed = 60 * Encoder_Count;
		Encoder_Count = 0;
	} */
	
	/*Motor_Hights--;
	if(Motor_Hights == 0)
	{
		Motor_EN = 0;
	   	Motor_Hights = 1;
	}*/
}

/*void Close_PWM()//关闭PWM
{
	TR0 = 0;
	ET0 = 0;
} */
/*uchar HighRH = 0;
uchar HighRL = 0;
uchar LowRH = 0;
uchar LowRL = 0;
//sbit PWM_Pin = P1^1;

void PWM_Config(uchar dc) //配置PWM，输入占空比dc
{
	uint high, low;
//	ulong temp;

	//Period = (11059200/12)/fr; //一个周期所需计数值
	high = (Period * dc) / 100; //高电平所需计数值
	low = Period - high;//低电平所需计数值
	high = 65536 - high;//高电平重载值
	low = 65536 - low;//低电平重载值

	HighRH = (uchar) (high>>8);//高电平重载值高字节
	HighRL = (uchar) (high);//高电平重载值低字节
	LowRH = (uchar) (low>>8);//低电平重载值高字节
	LowRL = (uchar) (low);//低电平重载值低字节

	EA = 1;
	TMOD &= 0xF0;//清零T0的控制位
	TMOD |= 0x01;//配置T0为工作模式1
	TH0 = HighRH;//加载T0重载值
	TL0 = HighRL;
	ET0 = 1;//打开T0中断
	TR0 = 1;//使能T0中断
	IN_1 = 1;//PWM输出高电平
	
}



void Interrupt_T0() interrupt 1	//产生PWM输出，中断服务函数
{
	if (IN_1 == 1)
	{
		TH0 = LowRH;
		TL0 = LowRL;
		IN_1 = 0;
	}
	else 
	{
		TH0 = HighRH;
		TL0 = HighRL;
		IN_1 = 1;
	}
}*/



