#include "main.h"

/**
 *binary_to_uint: converts a binary num to a unit in base 10
 *
 *Return: unsigned int
 */

unsigned int binary_to_uint (const char *b)
{
	unsigned int u_int;
	int num_len, num_base;

	u_int = 0

	if (!b)
		return (0);

	for (num_len = 0; b[num_len] != '\0'; num_len++)
		;
	
	for (num_len--, num_base = 1; num_len >= 0; num_len--, num_base *= 2)
	{
		if (b[num_len] != '0' && b[num_len] != '1')
		{
			return (0);
		}

		if (b[num_len] & 1)
			u_int += num_base;
	}

	return (u_int);
}
