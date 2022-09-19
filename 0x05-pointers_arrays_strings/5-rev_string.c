#include "main.h"

/**
 * rev_string - reverses a string
 * @s: param of string
 */
void rev_string(char *s)
{
	int count, len, i;
	char new_string;

	count = 0;
	while (s[count])
		count++;
	len = count - 1;

	for (i = 0; i < len; i++)
	{
		new_string = s[len];
		s[len] = s[i];
		s[i] = new_string;
		len--;
	}
}
