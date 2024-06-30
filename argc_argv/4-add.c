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
	int o = 0;
	
	for (; i < argc; i++)
		o += atoi(argv[i]);
		if (atoi(argv[i]) > 57) 
			printf("Error\n");
			return (1);
	
	else
	{
		printf("%d\n", o);
		return (0);
	}
}
