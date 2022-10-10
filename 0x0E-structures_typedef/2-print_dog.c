#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer struct dog
 */
void print_dog(struct dog *d);
{
	if (!d)
		return;

	if (!(d->name))
		d->name = "(nil)";
	if (!(d->owner))
		d->owner = "(nil)";
	if (!(d->age))
		d->age = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
