#include "main.h"

/**
* _pow_recursion - Entry point of my code
* Return: Always 0.
* @x: bruh.
* @y: bruhhhhhhh.
*/
int _pow_recursion(int x, int y)
{
	if (y > 0)

		return (x * (_pow_recursion(x, y - 1)));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
