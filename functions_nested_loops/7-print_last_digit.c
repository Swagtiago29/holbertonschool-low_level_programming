#include "main.h"
/**
 *  print_last_digit - Entry Point
 * Return: Always lg
 * Description: this is a description
 * @u: also u
 */
int print_last_digit(int u)
{
	int lg = u % 10;

	if (lg < 0)
		lg = -lg;
	_putchar(lg + '0');
	return (lg);
}
