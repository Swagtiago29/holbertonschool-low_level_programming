#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
* sum_them_all - Entry point
*
* Return: pp
* @n: number of args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
		if (separator != NULL)
			printf("%i%s", va_arg(args, int);
		else
			printf("%i", va_arg(args, int));
	printf("\n");
}
