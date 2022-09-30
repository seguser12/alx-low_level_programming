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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == separators[j] && s[i + 1] >= 97 &&
			   s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
	}
	return (s);
}
