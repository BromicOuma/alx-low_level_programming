#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - functions that adds a node
  * @head: pointer to head pointer
  * @n: data to be added
  * Return: return the new memory allocated for the list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
