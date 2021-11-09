#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: head of list to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *temp;

		temp = h;
		while (temp)
		{
			if (temp->str == NULL)
			{
				printf("[0] (nil)\n");
				temp = temp->next;
				n++;
				continue;
			}
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		n++;
		}
		return (n);
}
