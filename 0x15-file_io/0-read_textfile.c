#include "main.h"

/**
 *ssiize_t: program reads a given text file
 *
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(file_d, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(file_d);
	free(buffer);

	return (nwr);
}
