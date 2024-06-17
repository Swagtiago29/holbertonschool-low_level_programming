#include "main.h"
/**
 * main - Entry Point
 * Return: Always 0
 * Description: this is a description
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
