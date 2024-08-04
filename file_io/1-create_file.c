#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile - read and write into stdoutput what's been read
 * Return: amount of chars printed
 * @filename: file to read
 * @letters: amount to print
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	fd =  open(filename, O_WRONLY | O_CREAT, mod_t 600)
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close (fd);
	return (1);

}	
