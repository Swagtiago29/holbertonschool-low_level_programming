#include "main.h"

/**
* char *_strncpy - Entry point of my code
*
* Return: Always 0.
* @dest: destino
* @src: string of chars
* @n: n?
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	
	return (0);
	for (i = 0; s1[i] == '\0'; i++)
	       	if (s1[i] == s2[i])
			return (0);
		else if (s1[i] < s2[i])
			return (-13);
		else 
			return (13);
	
}
