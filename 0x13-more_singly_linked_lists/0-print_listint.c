#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the head of the list to be printed
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num_elem = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		num_elem++;
		h = h->next;
	}

	printf("%d\n", h->n);
	num_elem++;

	return (num_elem);
}
