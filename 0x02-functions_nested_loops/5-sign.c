#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to print its sign
 *
 * Return: 1 if n is greater than 0, 0 if its 0, and -1 if negative
 */
int print_sign(int n)
{
	int base_num = 0;

	if (n < base_num)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == base_num)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
