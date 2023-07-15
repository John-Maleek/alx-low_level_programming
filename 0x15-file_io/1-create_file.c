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

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		int i = 0;

		while (text_content[i])
			i++;
		write_res = write(fd, text_content, i);
	}

	if (write_res == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
