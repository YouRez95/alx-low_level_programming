#include "hash_tables.h"

/**
 * hash_table_get - get value from table
 *
 * @ht: ht
 * @key: key
 *
 * Return: null if no found otherwise value
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	item = ht->array[index];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);
		}
		item = item->next;
	}
	return (NULL);
}
