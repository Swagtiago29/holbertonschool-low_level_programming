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
		return("NULL");
	else
	{
		s = malloc(size*sizeof(*s));
		s[0] = c;
		return(c);

	}
}
