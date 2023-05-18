#include "lists.h"

/**
 * sum_dlistint - function returns sum of all data (n) of dlistint_t linked list
 *
 * @head: linked list
 *
 * Return: sum or 0
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *lp = head;
	int la = 0;

	while (lp)
	{
		la += lp->n;
		lp = lp->next;
	}

	return (la);
}
