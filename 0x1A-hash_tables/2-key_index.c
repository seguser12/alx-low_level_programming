#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table
 * @key: the key to find the index of
 * @size: size of the array of indexes
 *
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_ind;

	if (size == 0)
		return (0);

	key_ind = hash_djb2(key) % size;

	return (key_ind);

}
