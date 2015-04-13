#include "includes.h"
uint RX_Data = 0;

void Interrupt_IRQ() interrupt 4
{
	if(RI == 1 )
	{
		RI = 0;
		RX_Data = SBUF;
		if(RX_Data == 0)
		{
			Motor_IN1 = ~Motor_IN1;
			Motor_IN2 = ~Motor_IN2;
		}
		else 
		{
			Motor_Hight = 1.17 * RX_Data;
		}
	}
	if(TI == 1)
	{
		TI = 0;
	}
}

/*void Send_Data(uint TX_Data)
{
	ES = 0;
	SBUF = TX_Data;
	while (!TI);
	TI = 0;
	ES = 1;
}*/
