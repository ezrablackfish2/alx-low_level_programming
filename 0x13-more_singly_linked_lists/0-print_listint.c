#include "lists.h"

/**
 * print_listint - prints the lists of the elements of node
 * @h: is the head node of the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
