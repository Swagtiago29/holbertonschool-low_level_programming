#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0
 * Description: this is a description
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	if (x < 9)
	{
		putchar(' ');
		putchar(',');
	}
	}
	return (0);
}
