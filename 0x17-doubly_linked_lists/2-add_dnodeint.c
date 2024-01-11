#include "lists.h"

/**
 * add_dnodeint - add node in dlistint_t list at the beginning
 * @head: head of list
 * @n: the element
 *
 * Return: node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	
	if (h != NULL)
		while (h->prev)
			h = h->prev;
	temp->next = h;
	
	if (h != NULL)
		h->prev = temp;
	*head = temp;

	return (temp);
}
