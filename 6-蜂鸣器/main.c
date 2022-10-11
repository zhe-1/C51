/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 让蜂鸣器发出声音 一段时间后关闭
 * @version 0.1
 * @date 2022-10-10
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "REG52.H"
#include <INTRINS.H>
#include "Delay.h"

void Delay(unsigned int xms);

sbit BEEP = P2^5;

void main()
{
    unsigned int i = 2000;
    while (1) {
        while (i--) {//循环2000次
            BEEP = !BEEP;//产生一定频率的脉冲信号
            Delay(1);
        }
        i = 0;//清0
        BEEP = 0;//关闭蜂鸣器
    }
}
