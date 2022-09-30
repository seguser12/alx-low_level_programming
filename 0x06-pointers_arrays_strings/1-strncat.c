#include "main.h"

/**
 * *_strncat - concatenates two strings using n bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes from src to concatenate
 *
 * Return: concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, len;

	len = 0;
	while (dest[len])
		len++;

	for (count = 0; dest[count] != '\0' && count < n; count++)
	{
		dest[len] = src[count];
		len++;
	}

	return (dest);
}
