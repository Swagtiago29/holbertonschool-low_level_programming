#include "main.h"

/**
* _sqrt_recursion - Entry point
* pepinillo - function for recursion
* Return: o, -1
* @x: bruh.
* @o: oooooooooo
*/
int pepinillo(int x, int o)
{
	if (o * o < x)
		return (pepinillo(x, o + 1));
	else if (o * o == x)
		return (o);
	else
		return (-1);
}

int _sqrt_recursion(int n)
{
	int o = 1;

	if (n >= 0)
		return (pepinillo(n, o));
	else
		return (-1);
}
