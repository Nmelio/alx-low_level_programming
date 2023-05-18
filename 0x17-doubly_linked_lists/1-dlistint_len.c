#include "lists.h"

/**
 * dlistint_len - function returns number of elements in linked dlistint_t list
 *
 * @h: linked list
 *
 * Return: nodes
 **/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *x = h;
	size_t y = 0;

	while (x)
	{
		y++;
		x = x->next;
	}

	return (y);
}
