#include "ctrl.h"
#include "delay.h"
		//TIM_SetCompare1(TIM4,10);//上左
		//TIM_SetCompare1(TIM4,17);//上中
		//TIM_SetCompare1(TIM4,26);//上右
		//TIM_SetCompare2(TIM4,21);//下竖
		//TIM_SetCompare2(TIM4,12);//下横 
void Reset(void)
{
	//delay_ms(2000);
	TIM_SetCompare2(TIM4,21);//下竖
	TIM_SetCompare1(TIM4,17);//上中
}
void Harmful(void)
{
	//delay_ms(2000);
	TIM_SetCompare2(TIM4,21);//下竖
	TIM_SetCompare1(TIM4,10);//上左
}
void Kitchen(void)
{
	//delay_ms(2000);
	TIM_SetCompare2(TIM4,21);//下竖
	TIM_SetCompare1(TIM4,26);//上右
}
void Other(void)
{
	//delay_ms(2000);
	TIM_SetCompare2(TIM4,12);//下横 
	TIM_SetCompare1(TIM4,10);//上左
}
void Recyclable(void)
{
	//delay_ms(2000);
	TIM_SetCompare2(TIM4,12);//下横 
	TIM_SetCompare1(TIM4,26);//上右
}
