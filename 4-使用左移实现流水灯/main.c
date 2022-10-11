/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 使用左移实现流水灯编程
 * @version 0.1
 * @date 2022-10-10
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <REG52.H>

void Delay(unsigned int xms);

#define LED_PORT P2 //使用宏定义将P2端口定义

void main()
{
    unsigned char i = 0;
    while (1) {
        for (i = 0; i < 8; i++) {
            /*
            0x01
            0000 0001
            0000 0010
            1111 1101
            */
            LED_PORT = ~(0x01 << i);
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
