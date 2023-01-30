#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head of linked list.
 * Return: Always 0 (Success).
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
