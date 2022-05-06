#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: A two dimentional array.
 * @height: height of the array.
 *
 * Description: functions as described above.
 * Return: pointer to the array.
 */
void free_grid(int **grid, int height)
{
	for (; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
