#include "main.h"

/**
 * more_numbers - prints 10 times the number
 * followed by a new line
 */
void more_numbers(void)
{
	int num, num2;

	num = 0;

	while (num < 10; num++)
	{
		for (num2 = 0; num2 < 15; num2++)
		{
			if (num2 >= 10)
				_putchar(num2 / 10 + '0');

			_putchar(num2 % 10 + '0');
		}
		_putchar('\n');
	}
}
