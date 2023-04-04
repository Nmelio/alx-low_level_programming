#include "lists.h"

/**
 * free_listint2 - frees linked list
 *
 * @head: pointer to listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *just;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		just = (*head)->next;
		free(*head);
		*head = just;
	}

	*head = NULL;
}
