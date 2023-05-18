#include "lists.h"

/**
 * delete_dnodeint_at_index - funct del node at index of dlistint_t linked list
 *
 * @head: linked list
 * @index: node to delete
 *
 * Return: 1 0r -1
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *abc = *head;
	dlistint_t *def = *head;
	unsigned int ghi;
	unsigned int jkl = 0;

	if (!(*head))
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = def->next;
		free(def);
		if (*head)
		{
			(*head)->prev = NULL;
		}
		return (1);
	}

	ghi = index - 1;
	while (abc && jkl != ghi)
	{
		jkl++;
		abc = abc->next;
	}

	if (jkl == ghi && abc)
	{
		def = abc->next;
		if (def->next)
		{
			def->next->prev = abc;
		}
		abc->next = def->next;
		free(def);
		return (1);
	}

	return (-1);
}
