#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a doubly linked dlistint_t list
 * @head: head of the list
 * Return: sum of data (Success), otherwise 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
