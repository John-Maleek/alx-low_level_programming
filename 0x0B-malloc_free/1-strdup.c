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
	char *strnew;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		strnew = (char *)malloc(sizeof(char) * (i));
	if (strnew == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strnew[j] = str[j];

	return (strnew);
}
