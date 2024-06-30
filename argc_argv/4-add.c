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
int main(int argc, char *argv[])
{
	int i = 0;
	int e = 0 + atoi(argv[i]);

	for (; i < argc; i++)
		printf("%d\n", e);
	return (0);
}
