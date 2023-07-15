#include "main.h"
#define BUFFER 1024

/**
 * copy_file - a function that copies the content of a file
 * to another
 *
 *@argc: number of arguments
 *@argv: pointer to the array of arguments
 *
 *Return: 0 Always
 */

int copy_file(int argc, char **argv)
{
	int fd_read, fd_write, read_res, write_res;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_read = open(argv[1], O_RDONLY);
	fd_write = open(argv[2], O_WRONLY | O_TRUNC | O_CREATE, 0664);

	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buff = malloc(sizeof(char) * BUFFER);
	read_res = read(fd_read, buff, BUFFER);
	if (read_res == -1)
	{
		free(buff);
		close_file(fd_read);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	write_res = write(fd_write, buff, read_res);
	if (write_res == -1)
	{
		free(buff);
		close_file(fd_write);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	free(buff);
	close(fd_read);
	close(fd_write);
	return (0);
}

/**
 *close_file - a function to close a file descriptor
 *
 *@file: value of file descriptor to be closed
 *
 *Return:
 */

void close_file(int file)
{
	int res;

	res = close(file);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		extit(100);
	}
}
