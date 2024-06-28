#include "main.h"

/**
* _strlen_recursion - Entry point of my code
* Return: Always 0.
* @s: bruh.
*/
int pepinillo(int x)
{	
		
	if (x > 0)
		return (pepinillo(x) * pepinillo(x));
	else
		return (0);
}

int _sqrt_recursion(int n)
{
	int x = 1;
	
	if (pepinillo(x)  == n)
		return (x);
	else
		return (-1);
}
