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
	unsigned long int i;
	char not_print = 0;
	hash_node_t *temp;

	if (ht->array == NULL || ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (not_print == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			not_print = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
