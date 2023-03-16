#include "lists.h"

/**
 * add_dnodeint - function that adds a node to the beginning
 * of a doubly linked dlistint list
 * @head: head of the list
 * @n: value of the new element
 * Return: address of the new element (Success), otherwise NULL (FAIL).
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;
	if (h != NULL)
		h->prev = new;
	*head = new;

	return (new);
}
