#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size
 * @c: char
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (0);
	for (n = 0; n < size; n++)
		*(ptr + 1) = c;
	*(ptr + 1) = '\0';
	return (ptr);
	free(ptr);
}
