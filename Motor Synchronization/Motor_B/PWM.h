#ifndef __PWM_H__
#define __PWM_H__
#define uchar unsigned char
#define uint unsigned int
/*引脚定义*/
sbit Motor_IN1 = P2^7;
sbit Motor_IN2 = P2^6;
sbit Motor_EN = P2^4;

/*声明外部函数*/
//extern void PWM_Config(uchar dc);
//extern void Close_PWM();

extern void Motor_Init();

extern uint Motor_Period;
extern uint Motor_Hight;
extern uint Motor_Hights;
extern char high[4];
//extern int Encoder_i ;

#endif