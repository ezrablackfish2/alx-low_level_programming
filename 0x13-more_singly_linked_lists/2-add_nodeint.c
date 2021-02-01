#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of another node
 * @n: the number to be inserted
 * @h: the head node
 * Return: nothing
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
