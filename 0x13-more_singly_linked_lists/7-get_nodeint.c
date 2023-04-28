#include "lists.h"

/**
 * get_nodeint_at_index - to get the nth node
 * @head: the head node
 * @index: the nth of the node
 * Return: the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head)
	{
		while (index > 0)
		{
			head = head->next;
			index--;
		}
	}
	else
	{
		return (NULL);
	}
	return (head);
}
