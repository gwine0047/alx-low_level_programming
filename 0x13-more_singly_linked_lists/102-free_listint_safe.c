#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: is the pointer to the first node.
 *
 * Return: the size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	unsigned int size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		current = (*h)->next;
		free(*h);
		*h = current;
		size++;
	}

	*h = NULL;
	return (size);
}
