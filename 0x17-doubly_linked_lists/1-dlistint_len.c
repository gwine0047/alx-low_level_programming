#include "lists.h"

/**
*print_dlistint - returns the number of elements
* in a dlistint_t list.
*@h: head of the list
*Return: element count.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t element_count = 0;

	if (h == NULL)
		return (element_count);
	while (h)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
