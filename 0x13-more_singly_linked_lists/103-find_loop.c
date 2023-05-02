#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: is pointer to the first node.
 *
 * Return: the address od the beginning of the loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast;
	listint_t *slow;

	if (head == NULL)
		return (NULL);

	fast = slow = head;
	while (fast && fast->next && slow)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			slow = head;
			while ((slow != fast))
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);


}
