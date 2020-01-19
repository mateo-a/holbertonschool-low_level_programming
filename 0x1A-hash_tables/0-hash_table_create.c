#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	if (size == 0)
		return (NULL);
	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);
	new_hash_table->size = size;
	new_hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (!new_hash_table)
	{
		free(new_hash_table);
		return (NULL);
	}
	return (new_hash_table);
}
