#include "lists.h"

/**
*print_dlistint - prints the elements of a
* dlistint_t list.
*@h: head of the list
*Return: node count.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	if (h == NULL)
	return (node_count);
	while (h)
	{
		node_count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}
