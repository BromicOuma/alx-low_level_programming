#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the singky linked structure
 * @head: address of the head pointer
 */

void free_listint(listint_t *head)
{

	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);

}
