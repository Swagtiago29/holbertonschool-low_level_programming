#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
* print_name - Entry point
*
* Return: void
* @f: function to point
* @name: name to print
*/
int sum_them_all(const unsigned int n, ...);
{
	va_list args;
	int i;
	int p;

	va_start(args, n);
	for (i = 0; i < n; i++)
		p = p va_arg(args, int);
	va_end(args);
	return(p);
}
