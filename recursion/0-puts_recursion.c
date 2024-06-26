#include "main.h"

/**
* reset_to_98 - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
void _puts_recursion(char *s)
{
	int i;

	if (i != '\0')	
	{
		_putchar(s[i]);
		_puts_recursion(i + 1);
	}
	return (0);
}
