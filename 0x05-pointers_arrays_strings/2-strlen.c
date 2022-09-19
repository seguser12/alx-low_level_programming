#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: param of the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}
