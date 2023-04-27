#include "lists.h"
/**
 * print_list - prints all the element of list_t
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
*/
size_t list_len(const list_t *h)
{
        size_t count = 0;

        while (h)
        {
			count++;
			h = h->next;
        }
        return (count);
}
