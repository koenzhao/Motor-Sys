#ifndef __KEYBOARD_H__
#define __KEYBOARD_H__

sbit Key_Increaes = P3^4 ; 
sbit Key_Decrease = P3^5 ;
sbit Key_Rollback = P3^6 ;
sbit Key_Stop = P3^7;

extern void Keyboard_Scan();
//extern int Rollback_Flag;

#endif