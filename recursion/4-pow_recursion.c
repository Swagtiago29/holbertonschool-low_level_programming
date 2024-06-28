#include "main.h"

/**
* _strlen_recursion - Entry point of my code
* Return: Always 0.
* @s: bruh.
*/
int _pow_recursion(int x, int y)
{
	if (y > 0)
	
		return (x * _pow_recursion(x, y - 1));
	else 
		return (-1);
}
