#include "main.h"
#include "2-strlen.c"
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
	int i, l1, l2;
	
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	for (i = 0; i < l1 && i < l2; i++)
	{	
		if (s1[i] < s2[i])
			return (-13);
		else if (s1[i] > s2[i])
			return (13);
	}
	return (0);
}
