#include "main.h"

/**
* *_strcpy - Entry point of my code
* Return: Always 0.
* @dest: also seguro
* @src:  no se
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	if (*src == '\0')
		return (dest);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);

}
