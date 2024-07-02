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
	char *cc = 0;
	int i;

	if (*str == '\0')
		return (NULL);
	for (i = 0; *str != '\0'; i++)
                cc[i] = str[i];
	cc = malloc(i * sizeof(str));
	if (cc == '\0')
		return (NULL);
	return (0);
}
