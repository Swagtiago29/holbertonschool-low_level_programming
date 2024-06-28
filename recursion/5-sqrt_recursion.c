#include "main.h"

/**
* _strlen_recursion - Entry point of my code
* Return: Always 0.
* @s: bruh.
*/
int pepinillo(int x, int o)
{
        if (o * o <= x)
	{
		
		return (pepinillo(x, o + 1));
	}	
        else
                return (-1);
}

int _sqrt_recursion(int n)
{
        int o = 1;

        if (n >= 0)
                return (pepinillo(n, o));
        else
                return (-1);
}
