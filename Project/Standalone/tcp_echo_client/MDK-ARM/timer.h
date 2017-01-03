/***************************************************************************
* NAME:    Timer.h
*----------------------------------------------------------------------------*/
//
#ifndef _Timer_h
#define _Timer_h

/*_____ I N C L U D E S ____________________________________________________*/
//
#include "sys.h"


/*_____ M A C R O S ________________________________________________________*/

/*_____ D E F I N I T I O N ________________________________________________*/
//

/*_____ V A R I A B L E ____________________________________________________*/
//
u8_t m_cTimer0;	//定时器0,用于显示循环
u8_t m_cTimer1;	//定时器1,用于方向盘中点检测计时
u8_t m_cTimer2;	//定时器2,用于5秒数据故障检测
u8_t m_cTimer3;
//-------------------
extern u8_t m_cTimerZdcs;					//定时器计时中断次数
//--------------------------------------
extern u8_t m_cZdcs,m_cZdcsbj;
//--------------------------------------

/*_____ D E C L A R A T I O N ______________________________________________*/
//
void Time_Count(void);					//运行定时器启动程序
void Init_Timer_Variable(void);			//初始化定时器用到的变量
void Init_Timer_Int(void);

#endif




