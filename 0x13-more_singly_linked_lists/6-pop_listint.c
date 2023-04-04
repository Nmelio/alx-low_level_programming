#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 *
 * @head: pointer to first element in the linked list
 *
 * Return: the data inside elements that was deleted,
 *
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *shit;
	int piss;

	if (!head || !*head)
	{
		return (0);
	}

	piss = (*head)->n;
	shit = (*head)->next;
	free(*head);
	*head = shit;

	return (piss);
}
