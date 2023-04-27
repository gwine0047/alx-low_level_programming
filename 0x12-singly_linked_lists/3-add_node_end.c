#include "lists.h"
/**
 * add_node_end - Adds a node to the beginning of a list
 *@head: points to the first node.
 * @str: is the data.
 *
 * Return: a pointer to the new node.
 */


list_t *add_node_end(list_t **head, const char *str)

{
	list_t *tail, *temp;
	unsigned int count = 0;

	for (; str[count] != '\0'; count++);

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (-1);

	tail->str = strdup(str);
	tail->len = count;
	tail->next = (NULL);
	temp = (*head);

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}

	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = tail;

	return (tail);
}
