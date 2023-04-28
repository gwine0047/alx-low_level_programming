#include "lists.h"
/**
 * listint_len - computes the number of elements in a list.
 * @h: is a list.
 *
 * Return: the number of element in a linked list.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
		return (count);
}
