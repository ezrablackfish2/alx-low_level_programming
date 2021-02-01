#include "lists.h"

/**
 * listint_len - return the length of the nodes
 * @h: the head node
 * Return: the numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
