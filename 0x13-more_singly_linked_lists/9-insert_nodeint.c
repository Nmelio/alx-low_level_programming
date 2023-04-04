#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in linked list,
 *
 * at a given position
 *
 * @head: pointer to the first node in the list
 *
 * @idx: index where the new node is added
 *
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int high;
	listint_t *hee;
	listint_t *dff = *head;

	hee = malloc(sizeof(listint_t));
	if (!hee || !head)
	{
		return (NULL);
	}

	hee->n = n;
	hee->next = NULL;

	if (idx == 0)
	{
		hee->next = *head;
		*head = hee;
		return (hee);
	}

	for (high = 0; dff && high < idx; high++)
	{
		if (high == idx - 1)
		{
			hee->next = dff->next;
			dff->next = hee;
			return (hee);
		}
		else
		{
			dff = dff->next;
		}
	}

	return (NULL);
}
