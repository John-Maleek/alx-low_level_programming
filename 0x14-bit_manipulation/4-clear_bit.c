#include "main.h"

/**
 *clear_bit: sets the value of a bit to 0 at a given index
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int u_int;

	if (index >= 64)
		return (-1);

	u_int = 1 << index;

	if (*n & u_int)
		*n ^= u_int;

	return (1);
}
