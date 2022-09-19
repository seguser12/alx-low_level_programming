#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: param of the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
