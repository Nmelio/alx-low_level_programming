#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: listint_t list to be freed
 *
 * No Return
 */

void free_listint(listint_t *head)
{
	listint_t *Suit;

	while (head)
	{
		Suit = head->next;
		free(head);
		head = Suit;
	}
}
