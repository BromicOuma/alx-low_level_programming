#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * key_index - get index of the array of linkedlist hashmap
  * @key: char of the key
  * @size:  size of the array of the hash table
  * Return: the index to assign the value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (key == NULL || size < 1)
		exit(0);

	idx = hash_djb2(key) % size;

	return (idx);
}
