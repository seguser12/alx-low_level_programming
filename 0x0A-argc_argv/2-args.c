#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all args
 * @ac: no of args
 * @av: arrays of args
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);

	return (0);
}
