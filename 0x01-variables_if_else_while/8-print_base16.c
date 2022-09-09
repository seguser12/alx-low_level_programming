#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: always 0;
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
		putchar(number);

	number = 97;
	while (number < 103)
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
