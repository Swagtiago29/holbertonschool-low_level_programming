#include "main.h"

/**
* _strlen_recursion - Entry point of my code
* Return: Always 0.
* @s: bruh.
*/
int pepinillo(int x)
{	
	if (x >= 0)
	{	
		x++; 
		return (pepinillo(x * x));
	}		
	else
	       	return (-1);
}

int _sqrt_recursion(int n)
{	
	if (n >= 0) 
		return (pepinillo(n));
	else
		return (-1);
}
