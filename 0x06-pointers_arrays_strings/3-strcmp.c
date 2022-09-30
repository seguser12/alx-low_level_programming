#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: compared string
 */
int _strcmp(char *s1, char *s2)
{
	int n, diff;

	for (i = 0; s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
	}
	diff = s1[i] - s2[i];
}
