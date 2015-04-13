#include "includes.h"
void Timer_Ext_UART_Init()
{
	EA = 0;//关闭总中断

	ET0 = 1;//ET0用于PWM产生
	ET1 = 1;//ET1测速计时
	ET2 = 1 ;//用于产生串口波特率
	EX0 = 1;//打开外部中断0
	ES = 1; //打开串口中断
	//RI = 0;//清除接收中断标志位
	//REN = 1;//允许串行接收
	//SM0 = 0;//串口方式1；
	//SM1 = 1;

	TMOD = 0x12;//T0:工作方式2   T1:工作方式1
	T2CON = 0x34;//T2做为波特率发生器
	//DCEN = 0; //T2默认向上计数
	SCON = 0x50;
	PCON = 0x00;

	TH0 = 0xCE;
	TL0 = 0xCE;
	TH1 = 0x3C;//定时50ms
	TL1 = 0xAF;
	TH2 = 0xFF;//设置波特率9600
	TL2 = 0xDC;
	RCAP2H = 0xFF;//T2自动重装初值
	RCAP2L = 0xDC;

	TR0 = 1;//运行定时器0
	TR1 = 1;//运行定时器1
	IT0 = 1;//下降沿有效

	PT0 = 1; //T0中断优先级高

	EA = 1;	//打开总中断
}