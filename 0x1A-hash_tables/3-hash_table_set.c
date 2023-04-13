#include "hash_tables.h"

/**
 * make_hash_node - a function that creates a hash node
 * @key: node's key
 * @value: value associated with the key
 * Return: the new node (Success), otherwise NULL (Fail).
*/
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}


/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash table to add or update the key/value to
 * @key: the key. It cannot be empty.
 * @value: value associated with the key
 * Return: 1 if (Success), otherwise 0.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node;
	hash_node_t *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL ||
		strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = make_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
