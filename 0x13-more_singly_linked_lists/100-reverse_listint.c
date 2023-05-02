#include "lists.h"
/**
 * reverse_listint - reverse a list.
 * @head: is the pointer to the first node.
 *
 * Return: a pointer to the first node
 * of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	prev_node = next_node = NULL;

	while (*head != 0)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
