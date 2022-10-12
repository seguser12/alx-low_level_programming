#include "3-calc.h"

/**
 * main - entry point of the program
 * @ac: number of args
 * @av: array of args
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	int a, b, func_call;
	char *s;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);
	s = av[2];
	if (*s != '+' && *s != '-' && *s != '/' && *s != '%' && *s != '*')
	{
		printf("Error\n");
		exit(99);
	}

	func_call = (get_op_func(s))(a, b);
	printf("%d\n", func_call);
	return (0);
}
