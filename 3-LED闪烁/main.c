/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief D1指示灯闪烁实验
 * @version 0.1
 * @date 2022-10-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <REG52.H>
/*
GPIO引脚
P0:P0_0 ~ P0_7
P1:P1_0 ~ P1_7
P2:P2_0 ~ P2_7
P3:P3_0 ~ P3_7
直插式发光二极管长正短负
*/
sbit LED1 = P2^0;

void Delay(unsigned int xms);

void main()
{   
    while (1){
        LED1 = 0;//低电平点亮
        Delay(1000);
        LED1 = 1;//高电平熄灭
        Delay(1000);
    }
}

void Delay(unsigned int xms)		//@12.000MHz
/**
 * @brief 延时函数
 */
{
    while (xms)
    {
        unsigned char i, j;

        i = 2;
        j = 239;
        do
        {
            while (--j);
        } while (--i);        
        xms --;
    }
}
