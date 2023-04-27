#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: list to be freed.
 * Return: noting
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != 0)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(temp);
}
