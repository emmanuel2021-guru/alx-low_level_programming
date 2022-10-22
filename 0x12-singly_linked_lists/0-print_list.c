#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list_t list to be printed.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned int num_elem = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		num_elem++;
		h = h->next;
	}

	return (num_elem);
}
