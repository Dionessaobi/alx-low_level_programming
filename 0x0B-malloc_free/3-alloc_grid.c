#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - points to a 2 dimensional array of integers
* @width: the row size
* @height: the column size
*
* Return: pointer to 2d array. Or NULL at failure
*/
int **alloc_grid(int width, int height)
{
	int **matrix;
	int a, b;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		matrix[a] = malloc(width * sizeof(int));
		if (matrix[a] == 0)
		{
			for (b = 0; b < a; b++)
				free(matrix[b]);
			free(matrix);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			matrix[a][b] = 0;
	}
	return (matrix);
}
