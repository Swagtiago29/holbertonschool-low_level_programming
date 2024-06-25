#include "main.h"

/**
* *_strncat - Entry point of my code
*
* Return: Always 0.
* @dest: destino
* @src: cosa al destino
* @n: xd
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, l = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (; src[l] != '\0' && l < n ; l++)
		dest[i++] = src[l];
	return (dest);
}
