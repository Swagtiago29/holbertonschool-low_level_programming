#include "main.h"

/**
* *_strcat - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
char *_strcat(char *dest, char *src)
{
	int i, l = 0;
	
	for (i = 0; dest[i] != '\0'; i++);
	for (; src[l] != '\0'; l++)
		dest[i]	= src[l];
	return (dest);	
}
