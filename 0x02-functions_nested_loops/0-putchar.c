#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: always zero
 */
int main(void)
{
	char *to_print = "_putchar";
	int count = 0;
	int end = 8;

	while (count < end)
	{
		_putchar(to_print[count]);
		count++;
	}
	_putchar('\n');

	return (0);
}
