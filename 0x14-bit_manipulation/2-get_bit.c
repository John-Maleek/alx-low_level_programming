#include "main.h"

/**
 * get_bit: returns the value of a bit at a given index
 *
 * Return: value of a given bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int u_int;

	if (n == 0 && index < 64)
		return (0);

	for (u_int = 0; u_int <= 63; n >>= 1, u_int++)
	{
		if (index == u_int)
		{
			return (n & 1);
		}
	}

	return (-1);
}
