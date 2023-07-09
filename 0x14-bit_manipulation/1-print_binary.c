#include <stdio.h>
#include "main.h"

/*
 *print_binary:  a function that prints the binary representation of a number.
 *
 *Return: Always 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int shift;
	int range;
	
	shift = 1UL << (sizeof(unsigned long int) * 8 - 1);
	range = sizeof(unsigned long int) * 8;

	for (int i = 0; i < range; i++)
	{
		unsigned  long int binary = (n & shift) >> (range - 1);

		printf("%lu", binary);

		shift >> 1;
	}
}
