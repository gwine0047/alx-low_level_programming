#include "lists.h"

/**
*add_dnodeint -adds a node at the beginning
* of a dlistint_t list.
*@head: head of the list
*@n: element of new node
*Return: element count.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
