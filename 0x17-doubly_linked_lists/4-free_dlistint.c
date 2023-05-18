#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: linked list.
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *main;
	dlistint_t *temp;

	if (head)
	{
		main = head;
		temp = head->next;
		while (temp)
		{
			free(main);
			main = temp;
			temp = temp->next;
		}
		free(main);
	}
}
