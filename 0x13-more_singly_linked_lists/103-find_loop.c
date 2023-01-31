#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * Use of malloc, free or arrays are not allowed.
 * Max of only two variables can be declared.
 * @head: head of the linked list.
 * Return: address of the node where the loop starts (Success), otherwise NULL
 * if there is no loop (Fail).
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *uno, *dos;

	uno = dos = head;
	while (uno && dos && dos->next)
	{
		uno = uno->next;
		dos = dos->next->next;
		if (uno == dos)
		{
			uno = head;
			break;
		}
	}
	if (!uno || !dos || !dos->next)
		return (NULL);
	while (uno != dos)
	{
		uno = uno->next;
		dos = dos->next;
	}
	return (dos);
}
