#include <stdio.h>

/**
 * main - prints number of arguments
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: always 0
 */
int main(int ac, char *av[])
{
	(void)av;

	printf("%d\n", ac - 1);
	return (0);
}
