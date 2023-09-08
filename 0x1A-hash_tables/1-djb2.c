#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm.
 * @str: char pointer to hash str
 * 
 * Return: hash key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hs = 5381;
	int c;

	while ((c = *str++))
	hs = ((hs << 5) + hs) + c;

	return (hs);
}
