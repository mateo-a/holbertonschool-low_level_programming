#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *ptr;
	char *new_key = key;

	if (!ht || !strlen(key) || !ht->size)
		return (0);

	index = key_index(new_key, ht->size);
	ptr = ht->array[index];
	if (ptr)
	{
		while (ptr)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				free(ptr->value);
				ptr->value = strdup(value);
				return (1);
			}
			ptr = ptr->next;
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
