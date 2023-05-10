#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * 
 * Return: Actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_res, write_res;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return  (0);

	read_res = read(fd, buf, letters);
	write_res = write(STDOUT_FILENO, buf, read_res);

	if (write_res == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (write_res);
}
