#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array param
 * @n: param of number of arrays to print
 */
void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);

		if (len != (n - 1))
			printf(", ");
	}
	printf("\n");
}
