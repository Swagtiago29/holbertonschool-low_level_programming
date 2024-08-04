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
	int n, o;
	char *buf;
	ssize_t i;

	if(filename == NULL)
		return (0);
	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	buf = malloc (sizeof char * letters)
	o = read(0, buf,letters);
	i = write (1, buf, letters);
	return (i);
	
}
