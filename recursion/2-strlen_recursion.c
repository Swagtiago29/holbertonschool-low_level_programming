#include "main.h"

/**
* _puts_recursion - Entry point of my code
* Return: Always 0.
* @s: bruh.
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strl±en_recurson(s + 1));
	else
		return (0);
}
