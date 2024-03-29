#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list.
 * @h: head of linked list.
 * Return: number of elements in linked list (Success).
 */
size_t listint_len(const listint_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
	{
		h = h->next;
	}
	return (size);
}
