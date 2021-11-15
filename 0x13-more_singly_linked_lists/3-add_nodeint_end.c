#include "lists.h"
/**
 * add_nodeint_end - add node to the end of a list
 * @head: insertion point
 * @n: int to be inserted
 * Return: link list element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *prev_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		free(new_node);

	if (!head || !n)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;


	if (*head == NULL)
		*head = new_node;
	else
	{
for (prev_node = *head; (prev_node->next != NULL); prev_node = prev_node->next)
	;

	prev_node->next = new_node;

	}
	return (new_node);
}
