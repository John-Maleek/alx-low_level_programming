#include "maiin.h"

/*
 *flip_bits: a function that returns the number of bits you would need to flip to get from one number to another
 *
 *
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	unsigned int num_of_bit = 0;

	while (value != 0)
	{
		num_of_bit += value & 1;
		value >>= 1;
	}

	return (num_of_bit);
}
