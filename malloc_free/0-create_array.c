#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0.
* @argc: int #strings
* @argv: array de strings
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return('\0');
	else
	{
		s = malloc(size * sizeof(c));
		if (s == NULL)
			return(NULL);
		for (i = 0; i < size; i++)
			s[i] = c;
		return(s);
			
	}	
}
