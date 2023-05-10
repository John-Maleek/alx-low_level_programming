#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * standard output.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_len;
	ssize_t write_res;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

		for (text_len = 0; text_content[text_len]; text_len++)
			;

		write_res = write(fd, text_content, text_len);
		
		if (write_res == -1)
		{
			close(fd);
			return (-1);
		}
	}
	
	close(fd);

	return (1);
}
