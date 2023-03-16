#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * doubly linked dlistint_t list
 * @head: head of the list
 * @index: index of the node, starting form 0
 * Return: nth node (Success), otherwise NULL (Fail)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
