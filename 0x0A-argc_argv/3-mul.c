#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two positive numbers
 * @ac: no of args
 * @av: array of args
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	int i, mul;

	mul = 1;
	if (ac < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < ac; i++)
		mul *= atoi(av[i]);

	printf("%d\n", mul);
	return (0);
}
