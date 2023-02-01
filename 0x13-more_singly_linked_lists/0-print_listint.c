#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - printall elements of listint
 * @h: the pointer to the structure
 * Return: returns the size of the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int counter;

	if (h == NULL)
	{
		printf("The list is empty\n");
		exit(0);
	}
	current = h;
	counter = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		counter++;
	}
		return (counter);
}
