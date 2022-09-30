#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number of bytes to copy
 *
 * Return: copied to strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}

	return (dest);
}
