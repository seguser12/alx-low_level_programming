#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int row, column, multiple;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			multiple = row * column;
			if (column == 0)
			{
				multiple = 0;
				_putchar(multiple + '0');
			}
			if (multiple <= 9 && column != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multiple + '0');
			}
			if (multiple > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multiple / 10) + '0');
				_putchar((multiple % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
