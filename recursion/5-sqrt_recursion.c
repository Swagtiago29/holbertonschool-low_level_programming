#include "main.h"

/**
* _strlen_recursion - Entry point of my code
* Return: Always 0.
* @s: bruh.
*/
int pepinillo(int x; int y = 0)
{	
	if (x > 0)
		if (y == x * x)
			return (pepinillo(x, y + 1) * pepinillo(x, y + 1));
	else
		return (0);
}

int _sqrt_recursion(int n)
{	
	if (pepinillo(n) == n)
		return (n);
	else
		return (-1);
}
