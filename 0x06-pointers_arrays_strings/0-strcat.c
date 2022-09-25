#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int count, len;

	len = 0;
	while (*dest)
		len++;

	for (count = 0; src[count] != '\0'; len++)
	{
		dest[len] = src[count];
		len++;
	}

	return (*dest);
}
