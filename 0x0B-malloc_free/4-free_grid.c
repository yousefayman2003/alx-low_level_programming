#include "main.h"
#include <stdlib.h>

/**
 * Description: free_grid - frees a 2 dimensinoal grid
 * Input:
 *	@grid: [array of array] --> 2 dimansional array
 *	@height: [int] --> number of rows
 * Return: NULL
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
