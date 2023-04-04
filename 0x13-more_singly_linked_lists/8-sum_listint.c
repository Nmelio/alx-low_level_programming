#include "lists.h"

/**
 * sum_listint - calculates sum of all data in a listint_t list
 *
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int off = 0;
	listint_t *on = head;

	while (on)
	{
		off += on->n;
		on = on->next;
	}

	return (off);
}
