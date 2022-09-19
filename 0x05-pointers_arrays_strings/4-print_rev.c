#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: param of string
 */
void print_rev(char *s)
{
	int count, len, i;

	count = 0;
	while (s[count])
		count++;
	len = count;

	for (i = len - 1 ; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
