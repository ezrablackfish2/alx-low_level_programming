#include "lists.h"

/**
 * free_list - frees the list of the node
 * @head: the first node
 * Return: nothing
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
