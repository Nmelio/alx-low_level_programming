#include "lists.h"

/**
 * get_dnodeint_at_index - function returns nth node of dlistint_t linked list
 *
 * @head: linked list
 * @index: nth node to be returned
 *
 * Return: nth node or NULL
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *lp = head;
	unsigned int la = 0;

	while (lp && la != index)
	{
		la++;
		lp = lp->next;
	}
	if (lp && la == index)
		return (lp);
	return (NULL);
}
