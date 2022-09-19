#include "main.h"

/**
 * reset_to_98 - updates value of a variable using pointer
 * @n: variable to update its value
 */
void reset_to_98(int *n)
{
	int *p = n;

	*p = 98;
}
