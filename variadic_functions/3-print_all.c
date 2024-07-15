#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
* sum_them_all - Entry point
*
* Return: pp
* @n: number of args
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list li;
	va_start(li, format);
	char lol;

	while (format != NULL && format[i] != '\0')
	{
		switch(format[i])
		{
			case 'c':
				printf("%c, ",va_arg(li, int));
				break;
			case 'i':
				printf("%i, ",va_arg(li, int));
				break;
			case 'f':
				printf("%f, ",va_arg(li, double));
				break;
			case 's':
				lol = va_arg(li, char *);
				if (lol == NULL)
					printf("(nil)");
				else
					printf("%s, ", lol);
				break;
		}
		i++;
	}
	va_end(li);
	printf("\n");
}
