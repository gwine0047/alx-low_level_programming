#include "lists.h"

/**
* dlistint_t *get_dnodeint_at_index - returns the
* sum of all data of a dlistint_t list.
*@head: head of the list
*Return: total.
*/
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *temp;
    int total = 0;

    if (head == NULL)
        return (0);
    temp = head;
    while (temp)
    {
        total += temp->n;
        temp = temp->next;
    }
    return (total);
}