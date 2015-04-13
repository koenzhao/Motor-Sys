#include "includes.h"
//int Cur_Err = 0;//当前偏差值
//uint Last_Err = 0;//上一次偏差值
//uint Pre_Err = 0;//上上次偏差值
//long int Delta_Value = 0;//矫正值
//float Kp = -0.2;//比例系数
//float Ki = 1;//积分系数
//float Kd = 1;//微分系数
void Speed_PID()
{
	
	//Cur_Err = Set_Speed - Encoder_Speed;
	//Cur_Err = Set_Speed - Motor_Hight;
	//Delta_Value = Kp*(Cur_Err - Last_Err) + Ki*Cur_Err + Kd*(Cur_Err - 2*Last_Err + Pre_Err);
	//Delta_Value = Kp * Cur_Err;
	//Motor_Hight += Delta_Value;
	//Pre_Err = Last_Err;
	//Last_Err = Cur_Err;
	/*if(Set_Speed>=0 && Set_Speed<75)
	{
		Motor_Hight = (0.43 * Set_Speed)/100;
		if(Motor_Hight == 0)
		{
			Motor_Hight = 1;
		}
	}
	else if(Set_Speed>=75 && Set_Speed<118)
	{
		Motor_Hight = ((0.48 * Set_Speed)/255)*100;
	}
	else if(Set_Speed>=118 && Set_Speed<171)
	{
		Motor_Hight = ((0.44 * Set_Speed)/255)*100; 
	}
	else if(Set_Speed>=171 && Set_Speed<200)
	{
		Motor_Hight = ((0.50 * Set_Speed)/255)*100;
	}
	else if(Set_Speed>=200 && Set_Speed<214)
	{
		Motor_Hight = ((0.59 * Set_Speed)/255)*100;
	}
	else if(Set_Speed>=214 && Set_Speed<230)
	{
		Motor_Hight = ((0.65 * Set_Speed)/255)*100;
	}
	else if(Set_Speed>=230 && Set_Speed<237)
	{
		Motor_Hight = ((0.70 * Set_Speed)/255)*100;
	}
	else if(Set_Speed>=237 && Set_Speed<243)
	{
		Motor_Hight = ((0.79 * Set_Speed)/255)*100;
	}
	else if(Set_Speed>=243 && Set_Speed<252)
	{
		Motor_Hight = ((0.87 * Set_Speed)/255)*100;
	}
	else if(Set_Speed>=252 && Set_Speed<255)
	{
		Motor_Hight = ((1 * Set_Speed)/255)*100;
	}*/
	
	while(RX_Data != 0)
	{
		Motor_Hight = 1.2*RX_Data;
	}
		




}