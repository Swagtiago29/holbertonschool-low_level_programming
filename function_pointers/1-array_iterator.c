#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
*  array_iterator - Entry point
*
* Return: void
* @array: array to pepe
* @action: thing to do
* @size:  size of array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*pepe)(int) = action;

	for (i = 0; i < size; i++)
		pepe(array[i]);
}
