#include "lists.h"
/**
 * add_node_end - add a node to the end of a list
 * @head: pointer to a pointer that points the head element
 * @str: node to be added
 * Return: the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	last = *head;

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next)
	last = last->next;

	last->next = new_node;

	return (new_node);
}
