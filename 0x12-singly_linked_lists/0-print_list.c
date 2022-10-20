#include "main.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list_t list to be printed.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	int num_elem = 1;

	tmp = h;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		printf("[%d] %s\n", h->next->len, h->next->str);
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		printf("[%d] %s\n", h->next->len, h->next->str);
	}

	while (tmp->next != NULL)
	{
		num_elem++;
		tmp = tmp->next;
	}

	return (num_elem);
}
