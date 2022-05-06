#include "main.h"

/**
 * alloc_grid - creates a 2 dimentional array of integers and
 * initializes each grid elements to 0.
 * @size: size of the array.
 * @c: character initialised to.
 *
 * Description: functions as described above.
 * Return: pointer to the array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL || grid == 0)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}
