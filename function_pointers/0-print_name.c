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
void print_name(char *name, void (*f)(char *))
{
	void (*print)(char *) = f;

	print(name);
}
