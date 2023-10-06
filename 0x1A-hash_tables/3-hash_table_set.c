#include "hash_tables.h"

hash_node_t *create_node(const char *key, const char *value);

/**
 * hash_table_set - add element or upadate to hash tb
 *
 * @ht: ht
 * @key: key
 * @value: value
 *
 * Return: 1 success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int current_index;
	hash_node_t *ht_item, *search_node;

	if (strcmp(key, "") == 0 || strcmp(value, "") == 0)
		return (0);

	current_index = key_index((const unsigned char *) key, ht->size);

	ht_item = create_node(key, value);
	if (ht_item == NULL)
		return (0);
	if (ht->array[current_index] == NULL)
	{
		ht->array[current_index] = ht_item;
		return (1);
	}
	else
	{
		search_node = ht->array[current_index];
		if (strcmp(search_node->key, (char *) key) == 0)
		{
			search_node->value = strdup((char *)value);
			return (1);
		}

		while (search_node->next != NULL)
		{
			if (strcmp(search_node->next->key, (char *)key) == 0)
			{
				search_node->value = strdup((char *)value);
				return (1);
			}
			search_node = search_node->next;
		}

		ht_item->next = ht->array[current_index];
		ht->array[current_index] = ht_item;
		return (1);
	}
}

/**
 * create_node - create item
 *
 * @key: key
 * @value: value
 *
 * Return: pointer to item
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *my_node;

	my_node = malloc(sizeof(hash_node_t));
	if (my_node == NULL)
		return (NULL);
	my_node->key = strdup((char *) key);
	my_node->value = strdup((char *) value);
	my_node->next = NULL;
	return (my_node);
}
