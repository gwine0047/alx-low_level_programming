#include "lists.h"
/**
 * free_listint2 - frees a list_t list and assign 
 * head to NULL.
 * @head: list to be freed.
 * Return: noting
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	while (head != 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
