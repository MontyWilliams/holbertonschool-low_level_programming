#include "hash_tables.h"
/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table to add  to
 * @key: string for key to hold
 * @value: value of the key
 * Return: 1 if success or -1 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = malloc(sizeof(hash_node_t));
	hash_node_t *tmp;

	if (!key || !ht || !node || strcmp("", key) == 0)
	{
		free(node);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		while (tmp != NULL)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(node->key);
				free(tmp->value);
				tmp->value = node->value;
				free(node);
				return (1);
			}
			tmp = tmp->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
