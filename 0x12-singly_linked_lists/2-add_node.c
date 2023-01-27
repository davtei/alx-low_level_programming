#include "lists.h"

/**
 * add_node - function that add a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list_t list.
 * @str: string to add to the list_t list.
 * str needs to be duplicated.
 * Return: address of the new element (Success), otherwise NULL (Fail).
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	for (len = 0; str[len]; len++)
	{
		;
	}
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
