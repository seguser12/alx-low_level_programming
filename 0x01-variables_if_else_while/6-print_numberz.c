#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: always 0;
 */
int main(void)
{
	int count;

	for (count = 48; count < 58; count++)
		putchar(count);

	putchar('\n');
	return (0);
}
