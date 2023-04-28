#include "lists.h"
/**
 * free_listint - frees a list_t list.
 * @head: list to be freed.
 * Return: noting
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
