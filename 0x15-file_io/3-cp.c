#include "main.h"

/**
 * file_error - prints appropriate error message
 * when there is an error reading or writing to a file
 * @filename: File name
 * @err_num: error  number
 * Return: void
 */

void file_error(int err_num, char *filename)
{
	if (err_num == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (err_num == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	if (err_num == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", filename);
		exit(100);
	}
}

/**
 * copy_file - copies the content of a file to another
 * @file_from: file to read from
 * @file_to: file to read to
 * Return: void
 */

void copy_file(char *file_from, char *file_to)
{
	int file_read, read_res, file_write, write_res;
	char *buf[1024];

	file_read = open(file_from, O_RDONLY);
	if (file_read < 0)
		file_error(98, file_from);

	file_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_write < 0)
	{
		close(file_read);
		file_error(99, file_to);
	}
	do {
		read_res = read(file_read, buf, 1024);
		if (read_res < 0)
			file_error(98, file_from);

		write_res = write(file_write, buf, read_res);
		if (write_res < read_res)
			file_error(99, file_to);
	} while (write_res == 1024);

	close(file_read);
	if (close(file_read) < 0)
		file_error(100, file_from);

	close(file_write);
	if (close(file_write) < 0)
		file_error(100, file_to);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
