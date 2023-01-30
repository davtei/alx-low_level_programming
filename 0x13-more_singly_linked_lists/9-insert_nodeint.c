#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position in a listint_t list.
 * @head: head of the linked list.
 * @idx: index of the list where the new node should be added.
 * Index starts at 0.
 * @n: int element.
 * If it is not possible to add the new node at the idx, returns NULL.
 * Return: address of the new node (Success), otherwise NULL (Fail).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;
	if (idx != 0)
	{
		for (i = 0; i < (idx - 1) && h != NULL; i++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}
	return (new);
}
