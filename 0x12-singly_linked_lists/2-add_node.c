#include "lists.h"
/**
 * add_note - Adds a node to the beginning of a list
 *@head: points to the first node.
 * @str: is the data.
 *
 * Return: a pointer to the new node.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *nodeA;
	unsigned int count = 0;

	for (; str[count] != '\0'; count++)

	nodeA = malloc(sizeof(list_t));
	if (nodeA == NULL)
		return (NULL);

	nodeA->str = strdup(str);
	nodeA->len = count;
	nodeA->next = (*head);
	(*head) = nodeA;

	return (*head);
}
