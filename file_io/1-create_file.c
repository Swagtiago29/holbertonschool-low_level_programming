#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * create_file - create file and write text_content
 * Return: 1
 * @filename: file to read
 * @text_content: thing to write into file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	fd =  open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
