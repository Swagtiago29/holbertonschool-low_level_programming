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
void print_strings(const char *separator, const unsigned int n, ...)
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
		{
		if (separator == NULL)
			printf("%s", va_arg(args, char *));
		if (va_arg(args, char *) == NULL)
			printf("(nil)");
		if (separator != NULL)
			printf("%s%s", va_arg(args, char *), separator);
		}
	printf("%s\n", va_arg(args, char *));
	va_end(args);
}
