#include "main.h"

/**
 *binary_to_unit: converts a binary number to an unsigned int
 *
 * Return: unsigned int value of a given binary value
 */

unsigned int binary_to_uint(const char *b)
{
        unsigned int u_int;
        int len, binary_num;

        if (!b)
        {
                return (0);
        }

        u_int = 0;
        for (len = 0; b[len] != '\0'; len++)
                ;

        for (len--, binary_num = 1; len >= 0; len--, binary_num *= 2)
        {
                if (b[len] != '0' && b[len] != '1')
                {
                        return (0);
                }
                if (b[len] & 1)
                {
                        u_int += binary_num;
                }
        }
        return (u_int);
}
