#include "lists.h"
/**
 * pop_listint - deletes the head node of a list.
 * @head: node to be deleted.
 * .
 * Return: the head's note data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (head == NULL || *head == NULL)
		return (0);
	a = (*head)->n
	temp = *head;
	*head = temp->next;
	free(temp);

	return ((*head)->n);

}
