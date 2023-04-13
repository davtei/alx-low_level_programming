#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * The key/value are printed in the order that they appear
 * in the array of hash table
 * @ht: the hash table
 * Return: the hash table (Success),
 * otherwise nothing if ht is NULL.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	short commas = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < ht->size; ++i)
	{
		node = ht->array[i];
		while (node)
		{
			if (commas == 1)
				printf(", ");
			commas = 1;
			printf("'%s': '%s'", (char *) node->key,
								(char *) node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
