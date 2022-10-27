#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the head node to be deleted
 *
 * Return: the head node's data (n) or
 * 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int tmp_n;
	listint_t *tmp;

	tmp = *head;
	if (*head == NULL)
		return (0);

	tmp_n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (tmp_n);
}
