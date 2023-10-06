#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 *
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int colon = 0;
	hash_node_t *traverse;
	if (ht == NULL)
		return;

	i = 0;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		traverse = ht->array[i];
		while (traverse != NULL)
		{
			if (colon == 1)
				printf(", ");
			printf("'%s' : '%s'", traverse->key, traverse->value);
			traverse = traverse->next;
			colon = 1;
		}
		i++;
	}
	printf("}");
	printf("\n");
}
