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
	list_t *nodeZ, *temp;
	unsigned int count = 0;

	for (; str[count] != '\0'; count++)

	nodeZ = malloc(sizeof(list_t));
	if (nodeZ == NULL)
		return (NULL);

	nodeZ->str = strdup(str);
	nodeZ->len = count;
	nodeZ->next = (NULL);
	temp = (*head);

	if (*head == NULL)
	{
		*head = nodeZ;
		return (nodeZ);
	}

	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = nodeZ;

	return (nodeZ);
}
