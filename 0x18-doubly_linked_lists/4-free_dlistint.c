#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: Head pointer
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node = head;
	dlistint_t *current_node = head;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
