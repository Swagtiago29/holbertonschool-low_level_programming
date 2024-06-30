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
	if (argc == 3)
		printf("%d\n", argv[1] * argv[2]);
	else 
		printf("Error");
	return (0);
}
