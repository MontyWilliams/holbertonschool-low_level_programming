#include "lists.h"
/**
 * add_node - add a node to a list
 * @head: pointer to a pointer that points the head element
 * @str: node to be added
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
