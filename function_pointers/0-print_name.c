#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
* create_array - Entry point
*
* Return: Always 0.
* @size: size of array
* @c: charrr
*/
void print_name(char *name, void (*f)(char *))
{
	void (prit)(char *) = f;
	
	_putchar(name);
}
