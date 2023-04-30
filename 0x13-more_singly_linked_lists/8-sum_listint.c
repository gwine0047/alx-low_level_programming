#include "lists.h"
/**
 * sum_listint - sums all the data (n) of a list.
 * @head:the pointer to the first node of the list.
 *
 * Return: the sum of data (n) of a list
 * or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != 0)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
