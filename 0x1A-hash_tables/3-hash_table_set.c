#include "hash_tables.h"

hash_node_t *hash_node(const char *key, const char *value);

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key.
 *
 * Return: 1 on success, else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int index;

	if (!ht || !(ht->size) || !(ht->array) || !key
			|| strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!(tmp->value))
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	node = hash_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

/**
 * hash_node - creates a hash node
 * @key: key of node
 * @value: value of node
 *
 * Return: new node, or NULL on failure.
*/
hash_node_t *hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	/* allocate memory for hash node */
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (!(node->value))
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
