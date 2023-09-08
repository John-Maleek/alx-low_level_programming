#include "hash_tables.h"

/**
 * key_index - generates index of a key
 * @key: pointer the key
 * @size: size of hash table
 * 
 * Return: index key
 */
 
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
