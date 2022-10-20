#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the linked list in question
 *
 * Return: number of elements in linked list_t list
 */
size_t list_len(const list_t *h)
{
	unsigned int num_elem = 1;
	const list_t *tmp;

	tmp = h;

	while (tmp->next != NULL)
	{
		num_elem++;
		tmp = tmp->next;
	}

	return (num_elem);
}
