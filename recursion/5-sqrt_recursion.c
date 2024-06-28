#include "main.h"

/**
* _strlen_recursion - Entry point of my code
* Return: Always 0.
* @s: bruh.
*/
int pepinillo(int x)
{	
	if (x >= 0)
		return (pepinillo(x + 1) * pepinillo(x + 1));
	else
	       	return (-1);
}

int _sqrt_recursion(int n)
{	
	if (n == pepinillo(n))
		return (pepinillo(n));
	else
		return (-1);
}
