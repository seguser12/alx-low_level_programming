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
		return (NULL);
	for (n = 0; n < size; n++)
		ptr[n]  = c;
	ptr[n] = '\0';
	return (ptr);
}
