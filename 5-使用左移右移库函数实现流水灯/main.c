/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 使用左移右移库函数实现流水灯
 * @version 0.1
 * @date 2022-10-10
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <REG52.H>
#include "INTRINS.H"

#define LED_PORT P2//使用宏定义将P2端口定义

void Delay(unsigned int xms);

void main()
{
    unsigned char i = 0;
    /*
    0x01
    ~0000 0001
    ----------
     1111 1110
    */
    LED_PORT = ~0x01;//点亮最后一个LED
    Delay(1000);
    while (1) {
        for (i = 0; i < 7; i++) {
            /*
            extern unsigned char _crol_    (unsigned char, unsigned char);
            将端口左移
            */
            LED_PORT = _crol_(LED_PORT, 1);
            Delay(1000);
        }
        for (i = 0; i < 7; i++) {
            /*
            extern unsigned char _cror_    (unsigned char, unsigned char);
            将端口右移
            */
            LED_PORT = _cror_(LED_PORT, 1);
            Delay(1000);
        }
    }
}

void Delay(unsigned int xms) //@12.000MHz
/**
 * @brief 延时函数
 */
{
    while (xms) {
        unsigned char i, j;

        i = 2;
        j = 239;
        do {
            while (--j)
                ;
        } while (--i);
        xms--;
    }
}
