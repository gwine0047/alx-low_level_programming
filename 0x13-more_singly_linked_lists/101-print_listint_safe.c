#include "lists.h"
/**
 * size_t print_listint_safe - prints a linked list.
 * @head: is a pointer tp the first node of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node, *previous_node;
	unsigned int num_nodes_visited = 0;
	unsigned int num_previous_nodes = 0;
	current_node = previous_node = NULL;
	
	current_node = head;

	while (current_node)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		num_nodes_visited++;

		previous_node = head;
		while (num_previous_nodes < num_nodes_visited)
		{
			if (current_node == previous_node)
			{
				printf("-> [%p] %d\n", (void *)current_node, current_node->n);
				return num_nodes_visited;
			}
			previous_node = previous_node->next;
			num_previous_nodes++;
		}

		current_node = current_node->next;
		if (!head)
			exit(98);
	}
	return (num_nodes_visited);
}
