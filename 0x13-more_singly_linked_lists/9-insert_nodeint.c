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
	listint_t *temp, *new_node, *find;
	unsigned int count = 0, position = 0;
	
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

	if (idx > count)
		return (0);

	if (temp == *head)
		*head = new_node;

	find = *head;
	while (position < idx)
	{
		find = find->next;
	   position++;	
	}
	new_node->next = find->next;
	find->next = new_node;
	find->n = n;

	return (new_node);
}
