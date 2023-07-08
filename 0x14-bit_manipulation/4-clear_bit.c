#include "main.h"

/*
 *clear_bit: a function that sets the value of a bit to 0 at a given index
 *
 *index: where index is the index, starting from 0 of the bit you want to set
 *Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int range = sizeof(unsigned long int) * 8;

	if (index >= range)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
