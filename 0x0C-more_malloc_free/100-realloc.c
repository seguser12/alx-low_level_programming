#include "main.h"

/**
 * _realloc - reallocates memeory using malloc
 * @ptr: pointer to previous memory
 * @old_size: size of prev. memory
 * @new_size: size of new memory
 *
 * Return: pointer to the newly allocated memeory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr, *optr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	nptr = malloc(new_size);
	if (!nptr)
		return (NULL);
	optr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			nptr[i] = optr[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			nptr[i] = optr[i];
	}
	free(ptr);
	return (nptr);
}
