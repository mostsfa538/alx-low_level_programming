#include "lists.h"

/**
 * dlistint_len - prints a dlistint_len list
 * @h: head of the list
 *
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	if (h == NULL)
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
