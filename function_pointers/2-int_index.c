#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - Entry point
*
* Return: -1, i
* @array: array to compare
* @size: selfexplanatory :x
* @cmp: pointer to function to execute
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

	for (i = 0; i < size; i++)
		{
		r = compa(array[i]);
		if (r != 0)
			return (i);
		}
	return (-1);

}
