#include "main.h"

/**
 *get_bit: returns the value of a bit at a given index
 *
 *Returns: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int u_int;

	if (n == 0 && index < 64)
		return (0);

	for (u_int = 0; u_int <= 63; n >>= 1,  u_int++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
		else
			return (-1);
	}
}
