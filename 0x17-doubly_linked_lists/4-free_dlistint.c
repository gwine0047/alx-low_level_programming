#include "lists.h"

/**
* free_dlistint - frees the nodes
* of a dlistint_t list.
*@head: head of the list
*Return: void.
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;
    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}