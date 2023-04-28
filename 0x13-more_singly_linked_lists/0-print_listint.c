#include "lists.h"
/**
 * print_listint - prints all the element of list_t
 * @h: is a list.
 *
 * Return: the number of elements in list h.
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}


