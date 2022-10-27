#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head of the listint_t linked list
 * @index: the index of the nth node starting at 0
 *
 * Return: the nth node of the listint_t linked list or
 * NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int tmp_index = 0;
	listint_t *tmp;

	while (head != NULL)
	{
		if (head == NULL)
			return (NULL);

		if (tmp_index == index)
			break;

		tmp_index++;
		head = head->next;
	}

	tmp = head;
	return (tmp);
}
