#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer that points to the beginning of the list
 * @str: string to be assigned to the new node
 *
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *tmp_str;
	list_t *tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);

	tmp_str = strdup(str);
	if (tmp_str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	tmp->str = tmp_str;
	tmp->len = len;

	tmp->next = *head;

	*head = tmp;

	return (tmp);
}

