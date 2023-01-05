#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: pointer to newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht || size == 0)
		return (NULL);
	new_ht->array = malloc(sizeof(void *) * size);
	if (!new_ht->array)
		return (NULL);

	new_ht->size = size;

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	return (new_ht);
}
