#include "main.h"

/**
 * print_most_numbers - prints number from 0 - 9
 * except or 2 and 4
 * followed by a new line
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num == 50 || num == 52)
			continue;
		else
			_putchar(num);
	}
	_putchar('\n');
}
