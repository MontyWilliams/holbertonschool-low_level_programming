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
	unsigned int i;

	temp = malloc(sizeof(listint_t));

	if (!idx || !n || !temp)
		return (NULL);

	do {
	i++;
	} while (i < idx);

	if (*head == NULL)
	{
		*head = temp;
	}
		return (temp);
}
