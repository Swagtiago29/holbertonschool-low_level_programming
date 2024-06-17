#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0
 * Description: this is a description
 */
int main(void)
{
	int x;
	char c;

	for (x = 48; x <= 57; x++)
		putchar(x);	
	for (c = 97; c <= 102; c++)
	{	
		putchar(c);
	}
		putchar('\n');
	
	return (0);
}
