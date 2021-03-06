#include "lists.h"
/**
 * insert_nodeint_at_index - add node at index
 * @head: insertion point
 * @n: int to be inserted
 * @idx: index pos to insert
 * Return: link list element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *temp;
	listint_t *old_head = *head;
	unsigned int i = 0;

	temp = malloc(sizeof(listint_t));

	if (head->n == NULL)
		return (0);
	if (!temp || !n || !idx)
		return (NULL);
	temp->n = n;

	if (idx == 0)
	{
		temp->next = old_head->next;
		old_head->next = temp;
		return (temp);
	}

	while (i < idx)
	{
		if (i == idx - 1)
		{
			temp->next = old_head->next;
			old_head->next = temp;
		}

		i++;
		old_head = old_head->next;
	}
	return (temp);
}
