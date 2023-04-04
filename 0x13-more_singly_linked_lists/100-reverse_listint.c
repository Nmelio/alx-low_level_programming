#include "lists.h"

/**
 * reverse_listint - reverses linked list
 *
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *qq = NULL;
	listint_t *ww = NULL;

	while (*head)
	{
		ww = (*head)->ww;
		(*head)->ww = qq;
		qq = *head;
		*head = ww;
	}

	*head = qq;

	return (*head);
}
