#include "main.h"

/**
* factorial - Entry point of my code
* Return: Always 0.
* @n: bruh.
*/
int factorial(int n)
{
	if (n > 1)
		return (n * factorial(n - 1));
	else if (n == 1)
		return (1);
	else
		return (-1);
}
