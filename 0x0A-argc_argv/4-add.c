#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @ac: no of args
 * @av: array of args
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	int i, n, result;

	result = 0;

	if (ac < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			if (av[i][n] < '0' || av[i][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(av[i]);
	}
	printf("%d\n", result);
	return (0);
}
