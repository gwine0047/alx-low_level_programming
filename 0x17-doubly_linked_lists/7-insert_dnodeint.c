#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a node in
* a dlistint_t list.
*@h: head of the list
*@idx: index number.
*@n: data.
*Return: new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int a;

	new = NULL;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		temp = *h;
		a = 0;

		while (temp)
		{
			if (a == idx - 1)
			{
				if (temp->next == NULL)
				new = add_dnodeint_end(h, n);
			}
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new)
				{
					new->n = n;
					new->next = temp->next;
					new->prev = temp;
					temp->next->prev = new;
					temp->next = new;
				}
				break;
			}
		temp = temp->next;
		a++;
	}
}
	return (new);
}
