#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @array: array
 * @cmp: pointer to function
 *
 * Return: index of first element for which cmp does not return 0
 * return -1 in no element matches and size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

