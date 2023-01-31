#include <stdio.h>
#include "lists.h"

/**
 * print_list - print count of lists
 * @h: pointer to the structure
 * Return:Number of elements of a linkedlist
 */
size_t print_list(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
	h = h->next;
	counter++;
	}
	return (counter);
}
