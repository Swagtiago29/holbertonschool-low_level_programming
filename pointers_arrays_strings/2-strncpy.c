#include "main.h"

/**
* char *_strncpy - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0, p;

	for (p = 0; src[p] != '\0'; p++)
		l++;
	for (; src[p] < n && p < n; p++)
		dest[p] = src[p];
	for (i = l; i < n; i++)
		dest[i] = '\0'
	return (dest);
}
