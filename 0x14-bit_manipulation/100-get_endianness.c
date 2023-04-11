#include "main.h"

/**
 *get_endianness: a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int u_int = 1;
	char *c;
	c = (char *) &u_int;

	return ((int)*c);
}

