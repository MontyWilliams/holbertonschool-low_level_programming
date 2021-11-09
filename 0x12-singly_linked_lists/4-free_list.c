#include "lists.h"
/**
 * free_list - free elements
 * @head: list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h->str);
		free(h);
	}

}
