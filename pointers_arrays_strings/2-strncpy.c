#include "main.h"

/**
* char *_strncpy - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
char *_strncpy(char *dest, char *src, int n)
{
	int o = 0, p = 0;

	for (; src[p] <= n && src[p] != '\0'; p++)
		dest[o] = src[p];
	return (dest);
}
