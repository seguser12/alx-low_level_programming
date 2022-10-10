#include "dog.h"

/**
 * free_dog - frees dog
 * @d: struct dog to fee
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
