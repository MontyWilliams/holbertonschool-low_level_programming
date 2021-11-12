#include "lists.h"

/**
 * free_listint2- free a listint_t list.
 * @head: first node in listint_t list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
}
