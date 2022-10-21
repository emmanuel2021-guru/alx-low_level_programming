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
	unsigned int len = 0;
	const char *tmp_str;
	list_t *tmp = malloc(sizeof(*tmp));

	tmp_str = strdup(str);
	tmp->str = strdup(str);

	if (tmp->str == NULL)
		return (NULL);
	if (tmp->str != NULL)
	{
		while (*tmp_str != '\0')
		{
			len++;
			tmp_str++;
		}

		tmp->len = len;

		tmp->next = *head;

		return (tmp);
	}
}
