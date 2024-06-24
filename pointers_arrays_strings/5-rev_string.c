#include "main.h"

/**
* reset_to_98 - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
void rev_string(char *s)
{
	int i = 0, l = 0;

	while (s[i]++)
		l++;
	for (i = l - 1; i >= l / 2; i--)
		_putchar('c');
}
