#include "main.h"

/**
 *binary_to_uint: converts a binary num to a unit in base 10
 *
 *Return: unsigned int
 */

unsigned int binary_to_uint (const char *b)
{
	unsigned int u_int = 0;
	int num_len = 0;

	if (b[num_len] == '\0')
		return (0);

	while ((b[num_len] == '0') || (b[num_len] == '1'))
	{
		u_int <<= 1;
		u_int += b[num_len] - '0';
		num_len++;
	}

	return (u_int);
}
