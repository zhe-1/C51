/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief ʵ�־�̬�������ʾ����0 ��P0�˿��������0(���������0x3f)
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
�����������
    ��������һ�� д0
�����������
    ��������һ�� д1
*/

//ʹ�ú궨������ܶ����
#define SMG_A_DP_PORT P0

/*
�����������ʾ0~F�Ķ�������
��������ܿ���ֱ��ȡ��~���в���
*/
unsigned char gsmg_code[17] = {
    0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07,
    0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71};

void main()
{
    SMG_A_DP_PORT = gsmg_code[14];
    while (1);
}