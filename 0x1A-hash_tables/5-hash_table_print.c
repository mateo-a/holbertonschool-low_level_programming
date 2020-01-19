#include "hash_tables.h"
/**
 * hash_table_print -  function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first;
	hash_node_t *ptr;

	if (!ht)
		return;
	first = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (first == 0)
				first = 1;
			else
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
