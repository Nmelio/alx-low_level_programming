#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 ^
 * @h: linked list
 *
 * Return: nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *x = h;
	size_t c = 0;

	while (c)
	{
		printf("%i\n", x->n);
		c++;
		x = x->next;
	}

	return (c);
}
