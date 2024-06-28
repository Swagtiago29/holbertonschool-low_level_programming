#include "main.h"

/**
* _strlen_recursion - Entry point of my code
* Return: Always 0.
* @s: bruh.
*/
int pepinillo(int x, int o, int res)
{
        if (res >= x)
		res = pepinillo(x, o + 1, res);
		return (res);
        else
                return (-1);
}

int _sqrt_recursion(int n)
{
        int o = 1, res = 0;

        if (n >= 0)
                return (pepinillo(n, o, res));
        else
                return (-1);
}
