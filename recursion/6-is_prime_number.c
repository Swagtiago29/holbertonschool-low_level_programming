#include "main.h"

/**
* pepinillo - entry function for recursion
* Return: o
* @x: bruh.
* @o: oooooooooo
* return: pepinillinnn
*/
int primito(int n, int i)
{
	if (n % i != 0)
		return (primito(n, i + 1));
	else if (n == i)
		return (1);
	else
		return (0);
}

/**
 * _sqrt_recursion - square root of a number
 * @n: variable
 * Return: alguna cosa
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n > 0)
		return (primito(n, i));
	else
		return (0);
}
