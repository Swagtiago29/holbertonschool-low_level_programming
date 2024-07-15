#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
* sum_them_all - Entry point
*
* Return: pp
* @n: number of args
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int p;

	va_start(args, n);
	for (i = 0; i < n; i++)
		p = p + va_arg(args, int);
	va_end(args);
	return (p);
}
