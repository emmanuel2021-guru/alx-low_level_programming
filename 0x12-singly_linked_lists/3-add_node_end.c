#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the first element in a linked list
 * @str: the node to be added to the list
 *
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	int len, i;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (node->str[i] != '\0')
	{
		len++;
		i++;
	}
	node->len = len;
	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		while (*head->next != NULL)
		{
			*head = (*head)->next;
		}
		node->next = *head;
		*head = node;
	}

	return (node);
}
