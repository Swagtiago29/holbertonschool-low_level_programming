#include "main.h"

/**
* _puts - Entry point of my code
*
* Return: Always 0.
* @str: jua str
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
