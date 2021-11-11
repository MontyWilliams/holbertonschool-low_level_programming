#include "lists.h"
/**
 * print_listint - print linked lists of ints
 * @h: head ptr
 * Description: i put the whole logic in a for loop
 * Return: count var which is size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; (h); h = (h->next), count++)
		{
			_putchar((h->n) + '0');
			_putchar('\n');
		}
			return (count);
}
