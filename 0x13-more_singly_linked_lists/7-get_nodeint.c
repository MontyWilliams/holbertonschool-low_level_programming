#include "lists.h"
/**
 * get_nodeint_at_index - get a particular node by index
 * @head: insertion point
 * @index: index position
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 1;

	if (head == NULL)
	return (NULL);
	else
	{
	do {
	return (head);
	 count++, head = head->next;
	} while (count < index);
/**	for (count = 0; count < index; count++)
		head = head->next;
*/	}
	return (head);

}
