#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile - read and write into stdoutput what's been read
 * Return: amount of chars printed
 * @filename: file to read
 * @letters: amount to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t o;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	o = read(fd, buf, letters);
	if (o == -1)
		return (0);
	write(1, buf, o);
	close(fd);
	return (o);
}
