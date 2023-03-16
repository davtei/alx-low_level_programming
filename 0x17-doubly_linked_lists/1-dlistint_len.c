#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a
 * doubly linked dlistint_t list.
 * @h: head of the list
 * Return: number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
