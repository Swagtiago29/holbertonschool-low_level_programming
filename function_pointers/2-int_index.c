#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - Entry point
*
* Return: void
* @f: function to point
* @name: name to print
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*compa)(int) = cmp;
	int r;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size < 0)
		return (-1);
	else
		for (i = 0; i < size; i++)
			{
			r = compa(array[i]);
			if (r != 0)
				return (i);
			}
	return (-1);

}