#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the list
 * @index: the index of the node
 *
 * Return: the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len = dlistint_len(head);
	unsigned int count = 0;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (len <= indx)
		return (NULL);

	if (head == NULL)
		return (NULL);

	while (head->prev)
		head = head->prev;

	while ((temp = head) != NULL)
	{
		if (index == count)
			return (temp);
		count++;
		head = head->next;
	}
	return (NULL);
}

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 * @h: the head of a d linked list
 *
 * Return: @h size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
