#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strdup;
	unsigned int i, j;

	if(str == NULL)
		return (NULL);
	for(i = 0; i < str; i++)
		strdup = malloc(sizeof(char) * (i + 1));
	if(strdup == NULL)
		return (NULL);
	for(j = 0; j <= i; j++)
		strdup[j] = str[i];
	return (strdup);
}
