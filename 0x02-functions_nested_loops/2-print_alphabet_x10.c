#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the aplabet
 */
void print_alphabet_x10(void)
{
	int count = 10;
	char first_alpha;
	char last_alpha = 'z';

	while (count)
	{
		for (first_alpha = 'a'; first_alpha <= last_alpha; first_alpha++)
		{
			_putchar(first_alpha);
		}
		_putchar('\n');
		count++;
	}
}
