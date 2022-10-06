#include "main.h"

/**
 * array_range - creates an array of integers
 * @min - minimum range
 * @max - maximum range
 *
 * Return: pointer to new arary
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (ptr);
}
