#include "lists.h"

/**
 * add_note_end - adds node at the end
 * @head: the head file 
 * @str: the string to be copied
 * Return: the node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	int len = 0;

	while(str[len])
	{
		len++;
	}
	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
