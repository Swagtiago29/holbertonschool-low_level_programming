#include "main.h"

/**
* _strlen_recursion - Entry point of my code
* Return: Always 0.
* @s: bruh.
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
