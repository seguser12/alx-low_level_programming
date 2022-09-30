#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @c: string array
 *
 * Return: the string
 */
char *string_toupper(char *c)
{
	int n = 0;

	while (c[n])
	{
		if (c[n] >= 97 && c[n] <= 122)
			c[n] -= 32;
		n++;
	}
	return (c);
}
