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
	int i = atoi(argv[1]);
	int p = atoi(argv[2]);
	
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
	return(0);
}
