#include "hash_tables.h"

/**
 * key_index - compute the index from hash function
 *
 * @key: key we want insert or search
 * @size: size of the hash table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int compute_index;

	compute_index = hash_djb2(key) % size;
	if (compute_index > size - 1)
		return (EXIT_FAILURE);
	return (compute_index);
}
