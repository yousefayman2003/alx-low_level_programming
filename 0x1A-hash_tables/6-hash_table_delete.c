#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table to delete
*/
void hash_table_delete(const hash_table_t *ht)
{
	hash_node_t *next;
	unsigned long i = 0;

	while (i < ht->size)
	{
		while (ht->array[i])
		{
			next = ht->array[i]->next;
			free(ht->array->key);
			free(ht->array->value);
			free(ht->array);
			ht->array[i] = next;
		}
		i++
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
