#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h - is the pointer to the first node.
 *
 * Return: the size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	int dif;
	unsigned int size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != 0)
	{
		dif = (*h)->next - (*h);
		if (dif <= 0)
		{
			free(*h);
			size++;
			break;
		}
		else
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			size++;
		}
	}
	*h = NULL;
	return (size);
}
