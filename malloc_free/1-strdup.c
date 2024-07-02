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
char *_strdup(char *str)
{
	char *cc;
	unsigned int i;
	unsigned int o;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	
	cc = malloc((i + 1) * sizeof(char));
	if (cc == NULL)
                return (NULL);
	for (o = 0; str[o] != '\0'; o++)
		cc[o] = str[o];
	cc[o] = '\0';
	return (cc);
}
