#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * the function sets the head to NULL.
 * @head: head of the linked list.
 * Return: Always 0 (Success).
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
