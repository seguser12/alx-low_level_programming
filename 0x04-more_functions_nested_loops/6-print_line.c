#include "main.h"

/**
 * print_line - draws a straight line to terminal
 * @n: number of times
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int count;

		for (count = 0; count <= n; count++)
			_putchar('_');

		_putchar('\n');
	}
}
