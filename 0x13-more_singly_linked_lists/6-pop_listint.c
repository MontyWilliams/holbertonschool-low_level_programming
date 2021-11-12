#include "lists.h"
/**
 * pop_listint - check the code
 * @head: insertion point
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int j;

	if (*head == NULL)
	return (0);
	else
	{
		temp = (*head);
		*head = (*head)->next;
		j = temp->n;
		free(temp);
	}
	return (j);
}
