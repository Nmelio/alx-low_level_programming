#include "lists.h"

/**
 * reverse_listint - reverses linked list
 *
 * @head: pointer to first node in the list
 *
 * Return: pointer to first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *v = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = v;
		v = *head;
		*head = n;
	}

	*head = v;

	return (*head);
}
