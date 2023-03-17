#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - prints number of integers
 * @h: head
 * Return: returns number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int count;

	count = 0;
	if (h)
	{
	current = h;

	while (current)
	{
	count += 1;
	current = current->next;
	}

	}

	return (count);

}
