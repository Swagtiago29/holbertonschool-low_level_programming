#include "main.h"
#include "stdio.h"

/**
* print_array - Entry point of my code
*
* Return: Always 0.
* @a: jua a
* @n: xddddddddddddddddd n
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		printf(", ");
	}
	printf("\n");
}
