#include "main.h"

/*
 *get_bit: a function that returns the value of a bit at a given index.
 *
 * index: where index is the index, starting from 0 of the bit you want to get
 *
 *Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;
	unsigned long int shift_num;
	unsigned long int range = sizeof(unsigned long int) * 8;

	if  (index >= range)
	{
		return (-1);
	}	

	shift_num = n >> index;
	value = shift_num & 1;

	return (value);
}
