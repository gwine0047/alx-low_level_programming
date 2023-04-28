#include "lists.h"
/**
 * add_nodeint_end - Adds a node to the end of a list.
 *@head: points to the first node.
 *@n: is the data.
 *
 * Return: a pointer to the new node.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *temp;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);

	tail->n = n;
	tail->next = (NULL);
	temp = (*head);

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = tail;

	return (tail);
}
