#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index index
 * of a doubly linked dlistint list
 * @head: head of the list
 * @index: index of the node that should be deleted. Starts from 0
 * Return: 1 (Success) OR -1 (Fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
