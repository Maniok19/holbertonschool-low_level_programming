#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the text to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written = 0, text_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == -1 || bytes_written != text_len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
