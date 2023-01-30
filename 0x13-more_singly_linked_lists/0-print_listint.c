#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head of the linked list.
 * Return: number of nodes (Success).
 */
size_t print_listint(const listint_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
