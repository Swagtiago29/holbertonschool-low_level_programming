#include "main.h"

/**
* print_alphabet_x10 - Entry point of my code
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char p;
	int o;

	for (o = 0; o <= 9; o++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
			if (p == 'z')
				_putchar('\n');
		}
	}
}
