#include "lists.h"

/**
* dlistint_t *get_dnodeint_at_index - returns the nth node
* of a dlistint_t list.
*@head: head of the list
*@index: index of the node.
*Return: node.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *temp;
    unsigned int i = 0;

    if (head == NULL)
        return NULL;

    temp = head;
    while (temp != NULL)
    {
        if (i == index)
            break;
        temp = temp->next;
        i++;
    }
    return (temp);
}