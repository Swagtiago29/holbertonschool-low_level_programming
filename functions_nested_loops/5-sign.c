#include "main.h"
/**
 * main - Entry Point
 * Return: Always 0
 * Description: this is a description
 */
int print_sign(int n)
{
	if (n > '0')	
	{
		_putchar('+');
		return (1);
	}
	else if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
