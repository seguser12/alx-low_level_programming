#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char first_alpha = 'a';
	char last_alpha = 'z';

	while (first_alpha <= last_alpha)
	{
		_putchar(first_alpha);
		first_alpha++;
	}
	_putchar('\n');
}
