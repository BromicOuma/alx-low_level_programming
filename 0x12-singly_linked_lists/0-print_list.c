#include <stdio.h>
#include <string.h>
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
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			int n = (int)strlen(h->str);

			printf("[%d] %s\n", n, h->str);
		}
		h = h->next;
	counter++;
	}
	return (counter);
}
