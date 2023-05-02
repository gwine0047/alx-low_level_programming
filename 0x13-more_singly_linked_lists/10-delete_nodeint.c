#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: is the pointer to the first node.
 * @index: is the position of the node to be deleted.
 *
 * Return: 1 when successful, -1 when not.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next_node = NULL;
	size_t position;

	if (head == NULL || !(*head))
		return (-1);

	temp = *head;
	while (position < (index - 1))
	{
		if (temp == NULL || temp->next == NULL)
		temp = temp->next;
		position++;
	}

	if (temp == *head)
	{
		*head = 0;
		free(temp);
		return (1);
	}
	else
	{
		next_node = temp->next;
		temp->next = next_node->next;
		free(next_node);
	}

	return (1);

}
