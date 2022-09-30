#include "main.h"

/**
 * *cap_string - capitalizes all wordds of a string.
 * @c: string array
 *
 * Return: capitalized string
 */
char *cap_string(char *c)
{
	int i, j;

	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0 && c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (c[i] == separators[j] && c[i + 1] >= 97 &&
			   c[i + 1] <= 122)
				c[i + 1] -= 32;
		}
	}
	return (c);
}
