#include "main.h"

/**
* reset_to_98 - Entry point of my code
*
* Return: Always 0.
* @n: jua n
*/
char *_strcpy(char *dest, char *src)
{
	 while (*src != '\0')
	{
        	*dest = *src;
        	src++;
        	dest++;
	}
	*dest = '\0';
	return (dest);
}
