#include "main.h"

/**
 * print_to_98 - Prints all natural numbers
 * from n to 98.
 *
 * @n: input number.
 *
 * Return: no return.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar( n + '0' );
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			_putchar( n + '0' );
		}
	}
	_putchar('\n');
	return;
}
