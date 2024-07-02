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
	int i;

	cc = malloc(i * sizeof(str));
	for (i = 0; *str != '\0'; i++)
                cc[i] = str[i];
	return (cc);
}
