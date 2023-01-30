#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node's data (n).
 * @head: head of linked list.
 * Return: head node's data (Success), otherwise 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	tmp = *head;
	if (*head == NULL)
	{
		return (n);
	}
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
