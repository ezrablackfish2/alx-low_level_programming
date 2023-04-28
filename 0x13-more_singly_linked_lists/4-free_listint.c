#include "lists.h"

/**
 * free_listint - frees the list of the nodes in linked list
 * @head: is the head of the node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
