#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a list.
 * @head: is the pointer to the first node.
 * @index: is the nth node.
 *
 * Return: the nth node of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	size_t i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);

}

