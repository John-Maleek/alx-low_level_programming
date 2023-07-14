#include "main.h"

/**
 *read_textfile - a function that reads a text file and
 *prints it to the POSIX standard output
 *
 *@filename: name of fiile to read from
 *@letters: number of letters to be read
 *
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)	
{
	char *buff;
	int fd, read_res, write_res;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	read_res = read(fd, buff, letters);
	if (read_res == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	write_res = write(STDOUT_FILENO, buff, read_res);
	if (write_res == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (read_res);
}
