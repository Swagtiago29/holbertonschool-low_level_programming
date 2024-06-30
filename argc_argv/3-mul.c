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
	int i = atoi(argv[argc - 2]);
	int p = atoi(argv[argc - 1]);
	
	if (argc == 3)
	{
		printf("%d\n", i * p);
		return(0);
	}
	else if (argc == 2) 
	{	
		printf("Error\n");
		return(1);
	}
	else
		return(0);
}
