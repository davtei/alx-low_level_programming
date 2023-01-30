#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * No more than 1 loop.
 * No malloc, free or arrays.
 * Only max of two variables to declare.
 * @head: head of linked list.
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
