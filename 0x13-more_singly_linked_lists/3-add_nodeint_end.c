#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the head of the listint_t list
 * @n: the integer to be added to the new node
 *
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *tmp_head;

	tmp_head = *head;
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	while (tmp_head->next != NULL)
		tmp_head = tmp_head->next;

	tmp_head->next = tmp;

	return (tmp);
}
