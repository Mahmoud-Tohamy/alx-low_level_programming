#include "main.h"

/**
 * alloc_grid - Entry point
 *
 *@width: rows of matrix
 *
 *@height: columns of string
 *
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int o, x;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (o = 0; o < height; o++)
	{
		*(matrix + o) = (int *)malloc(width * sizeof(int));
		if (*(matrix + o) == NULL)
		{
			for (o = 0; o < height; o++)
			{
				p = matrix[o];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (x = 0; j < width; x++)
		{
			matrix[l][x] = 0;
		}
	}
	return (matrix);
}
