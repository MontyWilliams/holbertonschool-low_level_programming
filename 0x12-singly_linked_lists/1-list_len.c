#include "lists.h"
/**
 * list_len - list length singl link list
 * @h: linked list element
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	int n = 0;

	temp = h;
	while (!temp)
		return (n);
	do {
		temp = temp->next;
		n++;
		} while (temp);
	return (n);
}
