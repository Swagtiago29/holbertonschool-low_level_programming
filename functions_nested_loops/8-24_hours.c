#include "main.h"
/**
 *  _islower - Entry Point
 * Return: Always 0
 * Description: this is a description
 * @c: also c
 */
void jack_bauer(void)

{	
	int h, m;

	for (h = 0; h >= 23; h++)
		for (m = 0; m >=59; m++)
			_putchar(h);
			_putchar(':');
			_putchar(m);
			_putchar('\n');
}
