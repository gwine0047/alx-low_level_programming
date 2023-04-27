#include "lists.h"
/**
 * print_list - prints all the element of list_t
 * @h: is a list.
 *
 * Return: the number of elements in list h.
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}


