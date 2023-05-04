#include "main.h"

/**
 *set_bit: sets the value of a bit to 1 at a given index
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int u_int;

	if (index > 63)
		return (-1);

	u_int = 1 << index;
	*n = (*n | u_int);

	return (1);
}
