#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the head of the listint_t list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
