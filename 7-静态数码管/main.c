/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 实现静态数码管显示数字0 让P0端口输出数字0(共阴数码管0x3f)
 * @version 0.1
 * @date 2022-10-10
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <REG52.H>
#include "Delay.h"
#include <STDIO.H>
/*
共阳极数码管
    点亮其中一个 写0
共阴极数码管
    点亮其中一个 写1
*/

//使用宏定义数码管段码口
#define SMG_A_DP_PORT P0

/*
共阴数码管显示0~F的段码数据
共阳数码管可以直接取反~进行操作
*/
unsigned char gsmg_code[17] = {
    0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07,
    0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71};

void main()
{
    SMG_A_DP_PORT = gsmg_code[14];
    while (1);
}