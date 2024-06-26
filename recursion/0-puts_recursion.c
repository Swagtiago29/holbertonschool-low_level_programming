#include "main.h"

/**
* _puts_recursion - Entry point of my code
*
* Return: Always 0.
* @s: bruh.
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
