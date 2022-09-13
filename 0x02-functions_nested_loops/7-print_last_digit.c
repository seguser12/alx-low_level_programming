#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to print
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int abs_n, last_digit;

	if (n < 0)
		abs_n = -n;
	else
		abs_n = n;

	last_digit = abs_n % 10;

	return (last_digit);
}
