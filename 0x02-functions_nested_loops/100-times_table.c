#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int row, column, multiple;

	if ( n > 15 && n < 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				multiple = column * row;
				if (row == 0)
					_putchar(multiple + '0');
				if (multiple <= 9 && column != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(multiple + '0');
				}
				else if (multiple > 9 && multiple < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multiple / 10) + '0');
					_putchar((multiple % 10) + '0');
				}
				else if (multiple >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multiple / 100) + '0');
					_putchar(((multiple / 10) % 10) + '0');
					_putchar((multiple % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
