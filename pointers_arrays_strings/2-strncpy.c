#include "main.h"

/**
* char *_strncpy - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
char *_strncpy(char *dest, char *src, int n)
{
	int o = 0;

	dest[o] = src[n];
	for (; src[n] != '\0'; n++)
		dest[o] = src[n];
	return (dest);
}
