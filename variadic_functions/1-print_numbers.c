#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
* print_numbers - Entry point
*
* Return: void
* @separator: to be printed between int and int
* @n: number of args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		{
		printf("\n");
		return;
		}
	for (i = 0; i < n - 1; i++)
		if (separator != NULL)
			printf("%i%s", va_arg(args, int), separator);
		else
			printf("%i", va_arg(args, int));
	printf("%i\n", va_arg(args, int));
	va_end(args);
}
