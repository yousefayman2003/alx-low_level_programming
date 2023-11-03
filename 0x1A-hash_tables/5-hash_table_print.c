#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to print
*/
void hash_table_print(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;
	int flag = 0;

	if (!ht || !(ht->array))
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag)
				printf(", ");
			priintf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next
		}
		i++;
	}
	printf("}\n");
}
