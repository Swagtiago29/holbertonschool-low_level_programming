#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 * Description: alguna descripcion coherente
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t o;

	if(filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	buf = malloc (sizeof (char) * letters);
	o = read(fd, buf, letters);
	if (o == -1)
		return(0);
	write (1, buf, o);
	return (o);
	
}
