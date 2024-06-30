#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0.
* @argc: int #strings
* @argv: array de strings
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
