#include "main.h"

/**
* reset_to_98 - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
void print_rev(char *s)
{
	int i;
		
	for(i = 0; s[i] != '\0'; i++)
	       ;
	for(i = i; s[i - 1] != '\0'; i--)
		_putchar(s[i - 1]);
	_putchar('\n');	
}
