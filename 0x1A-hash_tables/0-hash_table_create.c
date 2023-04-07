#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
  * hash_table_create - creates a hastable
  * @size: size of hash table
  * Return: pointer to the newly created hashtable
  *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned int i;

	hash_node_t **arrays;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		{
		return (NULL);
		}

	arrays = malloc(sizeof(hash_node_t) * size);
	if (arrays == NULL)
		{
		return (NULL);
		}

	for (i = 0; i < size; i++)
		{
		arrays[i] = NULL;
		}

	hash_table->size = size;
	hash_table->array = arrays;

	return (hash_table);
}
