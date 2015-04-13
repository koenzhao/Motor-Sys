#include "includes.h"
/*  全局变量  */
uint Encoder_Count = 0;
uint Encoder_Speed = 0;
int Encoder_i = 0;
char speed[4]={'0','0','0',0};

void Interrupt_EXT0() interrupt 0
{
	Encoder_Count++;
	//LCD_Display(0x80, "EXT0");
}
void Interrupt_T1() interrupt 3
{
	TR1=0;
	TH1 = 0x3C;//定时50ms
	TL1 = 0xAF;
	Encoder_i++;
	if(Encoder_i == 20)
	{
		Encoder_i = 0;
		Encoder_Speed =  2.9*Encoder_Count;
		Encoder_Count = 0;
	}
	TR1=1;
} 

/*void Interrupt_T2() interrupt 5
{
	TR2=0;
	//TH1 = 0x3C;//定时50ms
	//TL1 = 0xAF;
	Encoder_i++;
	if(Encoder_i == 20)
	{
		Encoder_i = 0;
		Encoder_Speed = 10 * Encoder_Count;
		Encoder_Count = 50;
	}
	TR2=1;
}*/

void itoa(uint num,char a[])
{
	int i=2;
	uint temp = num;
	for(i=2; i>=0; i--)
	{
		a[i] = (temp % 10) + '0';
		temp = temp / 10;
	}
	
} 