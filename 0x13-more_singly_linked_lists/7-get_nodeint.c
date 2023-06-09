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
	size_t i = 0;

	if (head == NULL)
		return (NULL);

	if (index != 0)
	{
		while (i < index)
		{
			head = head->next;
			i++;
		}
	}
	return (head);

}

