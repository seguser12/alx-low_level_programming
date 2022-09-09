#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int count;

	for (count = 48; count <= 57; count++)
		putchar(count);
	printf("\n");

	return (0);
}
