#include "hash_tables.h"

/**
 * hash_table_create - allocate memory for the table and array of pointer
 *
 * @size: size of the array created
 *
 * Return: pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);

}
