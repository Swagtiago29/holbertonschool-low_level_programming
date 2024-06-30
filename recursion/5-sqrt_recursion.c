#include "main.h"

/**
* pepinillo - entry function for recursion
* Return: o
* @x: bruh.
* @o: oooooooooo
* return: pepinillinnn
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

/**
 * _sqrt_recursion - square root of a number
 * @n: variable 
 * Return: alguna cosa
 */
int _sqrt_recursion(int n)
{
	int o = 1;

	if (n >= 0)
		return (pepinillo(n, o));
	else
		return (-1);
}
