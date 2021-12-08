#include "lists.h"

/**
 * print_dlistint - print the linked list
 * @h: Head pointer
 *
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
  int i;
  const dlistint_t *copy;
  copy = h;
  
  for (i = 0; copy; copy = copy->next)
  {
    printf("%d\n", copy->n);
    i++;
  }
  return (i);
  }
