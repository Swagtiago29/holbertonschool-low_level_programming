#include "main.h"
#include "stdio.h"

/**
* reset_to_98 - Entry point of my code
*
* Return: Always 0.
* @a: jua a
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf ("%d", a[i]);
	}	
	printf (", ");
	printf ("\n");
}
