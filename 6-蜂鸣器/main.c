/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief �÷������������� һ��ʱ���ر�
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
        while (i--) {//ѭ��2000��
            BEEP = !BEEP;//����һ��Ƶ�ʵ������ź�
            Delay(1);
        }
        i = 0;//��0
        BEEP = 0;//�رշ�����
    }
}
