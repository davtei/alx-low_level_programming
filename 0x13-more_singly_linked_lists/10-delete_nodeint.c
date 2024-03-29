#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * @head: head of linked list.
 * @index: index of the node that should be deleted.
 * Index starts at 0.
 * Return: 1 (Success), otherwise -1 (Fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *next;
	unsigned int i;

	prev = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}
	next = prev->next;
	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	return (1);
}
