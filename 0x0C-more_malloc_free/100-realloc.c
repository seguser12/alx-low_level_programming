#include "main.h"

/**
 * _realloc - reallocates memeory using malloc
 * @ptr: pointer to previous memory
 * @old_size: size of prev. memory
 * @new_size: size of new memory
 */
void *_realloc(void *ptr, unsinged int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_sze)
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

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			nptr[i] = ptr[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			nptr[i] = ptr[i];
	}
	free(ptr);
	return (nptr);
}
