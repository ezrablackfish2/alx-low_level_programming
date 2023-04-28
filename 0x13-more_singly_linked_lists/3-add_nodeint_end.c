#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a linked list
 * @head: the head of the node
 * @n: the number to be given
 * Return: the node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head, *new;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}
