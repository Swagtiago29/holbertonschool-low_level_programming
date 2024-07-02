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
	
	if (size == 0)
		return("NULL");
	else
	{
		s = malloc(size * sizeof(c));
		s[0] = c;
		return(0);

	}
}
