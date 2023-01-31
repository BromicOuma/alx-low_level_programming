#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - print count of lists
 * @h: pointer to the structure
 * Return:Number of elements of a linkedlist
 */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
	h = h->next;
	counter++;
	}
	return (counter);
}
