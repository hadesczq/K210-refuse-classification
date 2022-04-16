#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"

int flag1 = 0;
/************************************************
 ALIENTEK战舰STM32开发板实验8
 定时器中断实验
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/
 int main(void)
 {		
  
	delay_init();	    	 //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(115200);	 //串口初始化为115200
 	LED_Init();			     //LED端口初始化
	TIM4_PWM_Init(200,7199);//10Khz的计数频率，计数到5为0.5ms  
	KEY_Init();
		
//  TIM_SetCompare2(TIM4,21);//下竖
//	TIM_SetCompare1(TIM4,10);//上左
//	 USART_SendData(USART1,1);        //发送数据A
	while(1)
	{
		
		
			if(flag1 == 1)
			{
				delay_ms(1000);
				TIM_SetCompare2(TIM4,21);//下竖
				TIM_SetCompare1(TIM4,17);//上中
				delay_ms(1000);
					
	  }
		//TIM_SetCompare1(TIM4,10);//上左
		//TIM_SetCompare1(TIM4,17);//上中
		//TIM_SetCompare1(TIM4,26);//上右
		//TIM_SetCompare2(TIM4,21);//下竖
		//TIM_SetCompare2(TIM4,12);//下横 
	}
}	 
 
