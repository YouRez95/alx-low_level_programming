#include "hash_tables.h"

/**
 * free_item - free item
 *
 * @item: node
 */

void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

/**
 * hash_table_delete - delete table
 *
 * @ht: table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *del_item, *next_item;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		del_item = ht->array[i];
		while (del_item != NULL)
		{
			next_item = del_item->next;
			free_item(del_item);
			del_item = next_item;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
