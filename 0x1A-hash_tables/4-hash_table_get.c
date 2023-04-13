#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves the value
 * associated with a key
 * @ht: the hash table to be searched
 * @key: the key being searched for
 * Return: the value associated with the element (Success),
 * otherwise NULL if the key could not be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (strlen(key) == 0 || key == NULL || ht == NULL ||
		ht->array == NULL || ht->size == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
