#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the head of the list
 *
 * Return: the number of elements in the linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h->next != NULL)
	{
		num_elem++;
		h = h->next;
	}

	num_elem++;

	return (num_elem);
}
