#include "main.h"

/**
 * alloc_grid - creates a 2 dimentional array
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: a pointer to created matrix
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (!ptr[i])
		{
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
