#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a listint_t linked list
 * @head: the head of the listint_t linked list
 * @idx: the index of the list where the new node should be added. Index starts at 0
 * @n: data to be in the new node
 *
 * Return: the address of the new node, or
 * NULL if it failed or if it is not possible to add the new node at index idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	unsigned int tmp_idx = 0;
	listint_t *head_restart;
	
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;

	head_restart = *head;

	while (*head != NULL)
	{
		if (tmp_idx == idx)
			break;

		if (tmp_idx == idx - 1)
		{
			tmp->next = (*head)->next;
			(*head)->next = tmp;
		}

		tmp_idx++;
		*head = (*head)->next;
	}

	*head = head_restart;

	return (tmp);

}
