#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *next;
	unsigned long int index = 0;

	if (ht == NULL)
		return;
	for (; index < ht->size; index++)
		for (ptr = ht->array[index]; ptr != NULL; ptr = next)
		{
			next = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
	free(ht->array);
	free(ht);
}
