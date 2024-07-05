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
	int **s;
	int i = 0;
	int o = 0;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(height * sizeof(int *));
	if (s == NULL)
		return (NULL);
	while (i < height)
	{	
		i++;
		s[i] = malloc(height * sizeof(int));
        	if (s[i] == NULL)
			for (i = 0; i >= 0; i--)
                		free(s[i]);
            	free(s);
            	return (NULL);
	}
	for (i = 0; i < height; i++)
	{	
		for (o = 0; o < width; o++)
			s[i][o] = 0;
	}
	return(s);
}
