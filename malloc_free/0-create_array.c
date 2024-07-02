#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* create_array - Entry point
*
* Return: Always 0.
* @size: size of array
* @c: charrr
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return ('\0');
	s = malloc(size * sizeof(c));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);	
}
