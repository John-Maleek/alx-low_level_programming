#include "main.h"

/**
 *create_file - a function that creates a file.
 *
 *@filename: name of file to be created
 *@text_content: a NULL terminated string to write to the file
 *
 *Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int fd, write_res;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		int i = 0;

		for (; text_content[i], i++)
			;
		write_res = write(STDOUT_FILENO, text_content, i);
	}

	if (write_res == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
