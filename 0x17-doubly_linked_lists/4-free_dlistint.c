#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	if (head == NULL)
		return;
	while (head->prev)
		head = head->prev;
	while ((head = temp) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
