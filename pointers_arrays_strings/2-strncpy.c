#include "main.h"

/**
* char *_strncpy - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
char *_strncpy(char *dest, char *src, int n)
{
	int p = 0;

	for (; src[p] != 0; p++)
		if ( p <= n)
			dest[p] = src[p];
		if (src[p] = '\0')
			break;
	return (dest);
}
