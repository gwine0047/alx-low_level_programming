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
	size_t position = 0;

	if (head == NULL || !(*head))
		return (-1);

	temp = *head;
	if (index != 0)
	{
		while (position < (index - 1))
		{
			if (temp != NULL && index != 0)
			temp = temp->next;
			position++;
		}
	}
	if (index != 0 && temp->next == NULL)
	{
		if (temp == NULL)
		{
			return (-1);
		}
	}
	next_node = temp->next;

	if (index != 0)
	{
		temp->next = next_node->next;
		free(next_node);
	}
	else
	{
		free(temp);
		*head = next_node;
	}
	return (1);

}
