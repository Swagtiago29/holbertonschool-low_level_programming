#include "main.h"

/**
* reset_to_98 - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
void _puts_recursion(char *s)
{
	int i = 0;

	while (i != '\0')
	{
		i++;
		_putchar(s[i]);
	}
	return (0);	
}
