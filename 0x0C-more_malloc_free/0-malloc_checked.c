#include "main.h"

/**
 * malloc_checked - allocates memeory using malloc
 * @b: unsigned int
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
