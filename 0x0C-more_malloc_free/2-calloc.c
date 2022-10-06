#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: no of elements
 * @size: size of elements
 *
 * Return: pointer to allocated memeory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size
	ptr = malloc(len);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		*(ptr + i) = 0;
	return (ptr);
}
