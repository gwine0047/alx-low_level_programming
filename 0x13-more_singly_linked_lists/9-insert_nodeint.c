#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position.
 * @head:pointer to the first node.
 * idx: dictates the position where the newnode
 * should be inserted..
 * @n: is the data of the newnode.
 *
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int count = 0;
	
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (!(*head) || head == NULL)
		return (0);

	temp = *head;
	while (temp->next != 0)
	{
		temp  = temp->next;
		count++;
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
