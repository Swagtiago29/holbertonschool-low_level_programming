#include "main.h"

/**
* reset_to_98 - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')	
	{
		_putchar(*s);
		_puts_recursion(*s + 1);
	}
	return (0);
}
