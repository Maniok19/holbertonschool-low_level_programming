#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor;
	char *c = (char *)malloc(sizeof(char) * letters);
	ssize_t bytes_read, bytes_written, total_written = 0;

	if (c == NULL)
		return (0);
	if (!filename)
		return (0);
	filedescriptor = open(filename, O_RDONLY);
	if (filedescriptor == -1)
		return (0);
	bytes_read = read(filedescriptor, c, letters);
	if (bytes_read == -1)
	{
		free(c);
		close(filedescriptor);
		return (0);
	}
	bytes_written = write(1, c, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(c);
		close(filedescriptor);
		return (0);
	}
	total_written = bytes_written;
	free(c);
	close(filedescriptor);
	return (total_written);
}
