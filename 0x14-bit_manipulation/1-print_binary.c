#include <stdio.h>
#include "main.h"

/*
 *print_binary:  a function that prints the binary representation of a number.
 *
 *Return: Always 0
 */

void print_binary(unsigned long int n)
{
	int i;
	i = sizeof(unsigned long int) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return (0);
	}

	for (i; i >= 0; i--)
	{
		printf("%d", (n >> 1) & 1);
	}

	return (0);
}
