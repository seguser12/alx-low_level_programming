#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min no of coins
 * @ac: no of args
 * @av: array of args
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	int i, j, result;

	int coin[] = {25, 10, 5, 2, 1};

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(av[1]);
	result = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coin[j])
		{
			result++;
			i -= coin[j];
		}
	}
	printf("%d\n", result);

	return (0);
}
