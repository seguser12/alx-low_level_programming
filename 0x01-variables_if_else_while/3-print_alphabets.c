#include <stdio.h>

/**
 * main - prints the alphabets in lowercase and then uppercase
 *
 * Return: always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(aplha);
	putchar('\n');

	return (0);
}
