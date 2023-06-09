#include "lists.h"
/**
 *add_nodeint- Adds a node to the beginning of a list
 *@n: data entry fort he new node.
 *@head: pointer to the head.
 *
 * Return: a pointer to the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeA;

	nodeA = malloc(sizeof(listint_t));
	if (nodeA == NULL)
		return (NULL);

	nodeA->n = n;
	if (*head == NULL)
	{
		*head = nodeA;
	}
	else
	{
		nodeA->next = (*head);
		(*head) = nodeA;
	}

	return (*head);
}
