#include "main.h"

/**
* char *_strncpy - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0, p = 0;

	for (;src[p] != '\0'; p++)
		l++;
	for (; l < n; p++)
		dest[p] = src[p];
	return (dest);
}
