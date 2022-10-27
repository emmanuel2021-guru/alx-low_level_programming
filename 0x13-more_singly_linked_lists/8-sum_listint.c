#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: the head of the listint_t linked list
 *
 * Return: the sum of all the data (n) of the listint_t linked list or
 * 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int tmp_sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		tmp_sum += head->n;
		head = head->next;
	}

	return (tmp_sum);
}
