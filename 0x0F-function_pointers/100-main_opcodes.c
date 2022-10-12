#include "function_pointers.h"

/**
 * main - prints its own opcodes
 * @ac: no of ags
 * @av: array of args
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	int byte, bytes, i;
	char *ptr;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(av[1]);
	byte = bytes - 1;

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == byte)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}
