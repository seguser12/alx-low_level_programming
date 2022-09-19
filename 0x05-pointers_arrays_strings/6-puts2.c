#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: param of string
 */
void puts2(char *str)
{
	int count, len, i;

	count = 0;
	while (str[count])
		count++;

	len = count;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
