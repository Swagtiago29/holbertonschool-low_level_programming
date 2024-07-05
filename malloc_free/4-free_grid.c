#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* free_grid - Entry point
*
* Return: Always 0.
* @grid: pointer to grid
* @height: hight of grid
*/
void free_grid(int **grid, int height);
{
	int i;

	for (i = 0; i < height; i++)
		free (grid[i]);
	free (grid);
}
