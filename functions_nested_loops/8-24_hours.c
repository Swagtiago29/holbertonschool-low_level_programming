#include "main.h"
/**
 * jack_bauer - Entry Point
 * Return: Always 0
 * Description: this is a description
 */
void jack_bauer(void)

{
	int h, m;

	for (h = 0; h <= 23; h++)
		for (m = 0; m <= 59; m++)
{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
}
}
