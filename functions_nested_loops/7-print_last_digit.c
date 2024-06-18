#include "main.h"
/**
 *  _islower - Entry Point
 * Return: Always 0
 * Description: this is a description
 * @c: also c
 */
int print_last_digit(int u)
{
	int lg = u % 10;
	if (lg < 0)
		lg = -lg;
	_putchar(lg + '0');
	return (lg);
}
