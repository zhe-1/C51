/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief ����D1ָʾ�� ��P2.0���һ���͵�ƽ
 * @version 0.1
 * @date 2022-10-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <REG52.H>
/*
GPIO����
P0:P0_0 ~ P0_7
P1:P1_0 ~ P1_7
P2:P2_0 ~ P2_7
P3:P3_0 ~ P3_7
ֱ��ʽ��������ܳ����̸�
*/
sbit LED1 = P2^0;

void main()
{   
    LED1 = 0;
    while (1){

    }
}