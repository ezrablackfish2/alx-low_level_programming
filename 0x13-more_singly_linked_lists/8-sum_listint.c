#include "lists.h"

/**
 * sum_listint - sums of the linked lists n value
 * @head: the head node
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
