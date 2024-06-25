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

	dest[n] = src[o];
	for (; src[o] != '\0'; o++)
		dest[n] = src[o];
	return (dest);
}
