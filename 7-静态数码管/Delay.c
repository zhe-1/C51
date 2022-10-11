#include "Delay.h"

void Delay(unsigned int xms) //@12.000MHz
/**
 * @brief ÑÓÊ±º¯Êý
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
