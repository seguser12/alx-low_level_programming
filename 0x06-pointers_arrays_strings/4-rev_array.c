#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int count = 0, temp;

	while (count < n)
	{
		n -= 1;
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}
}
