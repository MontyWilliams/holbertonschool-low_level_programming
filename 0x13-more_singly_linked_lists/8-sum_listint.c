#include "lists.h"
/**
* sum_listint - returns the sum of elements in a linked list
* @head: insertion point
* Return: sum of all elaments
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	do {
		sum += head->n;
		head = head->next;
	} while (head);

return (sum);
}
