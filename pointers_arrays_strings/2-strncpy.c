#include "main.h"

/**
* char *_strncpy - Entry point of my code
*
* Return: Always 0.
* @dest: destino
* @src: string of chars
* @n: n?
*/
char *_strncpy(char *dest, char *src, int n)
{
	int p = 0;

	for (; src[p] != '\0'; p++)
		if (p < n)
			dest[p] = src[p];
	return (dest);
}
