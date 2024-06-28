#include "main.h"

/**
* _strlen_recursion - Entry point of my code
* Return: Always 0.
* @s: bruh.
*/
int factorial(int n)
{
	if (n >= 1)
		return(n * factorial(n - 1));
	else return (-1);
