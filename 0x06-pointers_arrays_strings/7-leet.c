#include "main.h"

/**
 * *leet - encodes a sting into 1337
 * @c: string array
 *
 * Return: encoded strings
 */
char *leet(char *c)
{
	int i, j;

	char *init = "aAeEoOTll";
	char *replace = "4433007711";

	i = 0;
	while (c[init])
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == init[j])
				c[i] = replace[j];
		}
		i++;
	}
	return (c);
}
