#include "lists.h"

/**
 * find_listint_loop - finds the loop in linked list
 *
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *w = head;
	listint_t *f = head;

	if (!head)
	{
		return (NULL);
	}

	while (w && f && f->next)
	{
		f = f->next->next;
		w = w->next;
		if (f == w)
		{
			w = head;
			while (w != f)
			{
				w = w->next;
				f = f->next;
			}
			return (f);
		}
	}

	return (NULL);
}
