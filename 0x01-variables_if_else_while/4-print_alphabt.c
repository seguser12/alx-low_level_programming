#include <stdio.h>

/**
 * main - prints the alphavet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z' alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
