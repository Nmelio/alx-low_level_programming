#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *v = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->n;
		(*head)->n = v;
		v = *head;
		*head = n;
	}

	*head = v;

	return (*head);
}
