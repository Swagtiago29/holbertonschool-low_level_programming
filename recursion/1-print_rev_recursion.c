#include "main.h"

/**
* _print_rev_recursion - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
		
	}
}
