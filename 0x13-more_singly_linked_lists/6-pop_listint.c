#include "lists.h"

/**
 * pop_listint - pops out the head node
 * @head: the head node
 * Return: the integer node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int l;

	if (!head || !*head)
	{
		return (0);
	}

	l = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (l);
}
