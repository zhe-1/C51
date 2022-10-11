/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 点亮D1指示灯 让P2.0输出一个低电平
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

void main()
{   
    LED1 = 0;
    while (1){

    }
}