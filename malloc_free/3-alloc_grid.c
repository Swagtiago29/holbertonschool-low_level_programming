#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Entry point
*
* Return: Always 0.
* @width: width of grid?
* @height: height of grid?
*/
int **alloc_grid(int width, int height)
{
	char **s;
	int i = 0;
	int o = 0;
	
	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	s = malloc(width * sizeof(int *));
	if (s == NULL)
		return (NULL);
	while (i < height)
	{
		s[i] = malloc(height * sizeof(int));
        	if (s[i] == NULL)
			for (int o = 0; o < i; o++)
                		free(s[o]);
            	free(s);
            	return (NULL);
	}
}
