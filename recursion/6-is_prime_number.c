#include "main.h"

/**
* primito - function for recursion
* Return: 1, 0
* @n: variable
* @i: int++
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
 * is_prime_number - prime number sorter
 * @n: variable
 * Return: alguna cosa
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n > 1)
		return (primito(n, i));
	else if (n == 1)
		return (0);
	else
		return (0);
}
