#include "lists.h"

/**
 * looped_listint_len - counts the number of nodes in a looped
 * listint_t linked list.
 * @head: head of the linked list.
 * Return: number of unique nodes in the looped linked list,
 * otherwise 0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	a = head->next;
	b = (head->next)->next;
	while (b)
	{
		if (a == b)
		{
			a = b;
			while (a != b)
			{
				nodes++;
				a = a->next;
				b = b->next;
			}
			a = a->next;
			while (a != b)
			{
				nodes++;
				a = a->next;
			}
			return (nodes);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * This function can print lists with a loop.
 * Goes through the list only once.
 * @head: head of linked list.
 * Return: number of nodes in the list (Success),
 * otherwise exit with status 98 (Fail).
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p} %d\n", (void *)head, head->n);
	}
	return (nodes);
}
