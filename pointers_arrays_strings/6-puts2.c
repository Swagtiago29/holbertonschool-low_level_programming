#include "main.h"

/**
* reset_to_98 - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}	
	_putchar('\n');
}
