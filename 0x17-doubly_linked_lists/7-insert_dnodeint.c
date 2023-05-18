#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position
 *
 * @h: linked list
 * @idx: new node position
 * @n: new node imput
 *
 * Return: new node address or NULL
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *abc = *h;
	dlistint *def;
	unsigned int ghi;
	unsigned int jkl = 0;

	def = malloc(sizeof(dlistint_t));
	if (def == NULL)
	{
		return (NULL);
	}
	def->n = n;

	if (idx == 0)
	{
		def->prev = NULL;
		def->next = *h;
		if (*h)
		{
			(*h)->prev = def;
		}
		*h = def;
		return (*h);
	}

	ghi = idx - 1;
	while (abc && jkl != ghi)
	{
		jkl++;
		abc = abc->next;
	}

	if (jkl == ghi && abc)
	{
		def->prev = abc;
		def->next = abc->next;
		if (abc->next)
		{
			abc->next->prev = def;
		}
		abc->next = def;
		return (def);
	}
	free(def);
	return (NULL);
}
