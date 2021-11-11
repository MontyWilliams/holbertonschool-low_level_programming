#include "lists.h"
/**
 * listint_len - prints length of linked list
 * @h: head ptr
 * Description: i put the whole logic in a for loop
 * Return: count var which is size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; (h); h = (h->next), count++)
	;
			return (count);
}
