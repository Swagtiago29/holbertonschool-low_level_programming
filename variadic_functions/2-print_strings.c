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

	for (i = 0; i < n; i++)
		{
		char *ag = va_list(args, char *);
		if (ag == NULL)
			printf("(nil)");
		if (ag != NULL)
			printf("%s", ag);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		}
	printf("\n");
	va_end(args);
}
