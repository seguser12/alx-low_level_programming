#include "main.h"

/**
 * malloc_checked - allocates memeory using malloc
 * @b: unsigned int
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);
	if (!ptr)
		exit(98);
}
