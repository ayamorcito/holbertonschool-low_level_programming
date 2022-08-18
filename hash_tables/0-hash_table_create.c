#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table.
* @size: size of the array
* Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	hash->size = size;
	hash->array = calloc(hash->size, sizeof(hash_node_t *));

	if (hash->array == NULL)
		return (NULL);

	return (hash);
}
