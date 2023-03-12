#include <stdio.h>
#include <stdlib.h>

/**
 * main: prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", argc);
	return (0);
}
