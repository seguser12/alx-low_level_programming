#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
		putchar(alphab);

	putchar('\n');
	return (0);
}
