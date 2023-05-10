#include "main.h"

/**
 *create_file: a function that creates a file.
 *
 *Return: 1 on success, -1 on failure
 *(file can not be created, file can not be written,
 *write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, text_len;
	ssize_t write_res;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (text_len = 0; text_content[text_len]; text_len++)
		;

	write_res = write(fd, text_content, text_len);

	if (write_res == -1)
		return (-1);
	close(fd);

	return (1);
}
