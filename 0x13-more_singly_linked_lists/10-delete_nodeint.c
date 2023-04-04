#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in linked list at a certain index
 *
 * @head: pointer to the first element in the list
 *
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aaa = *head;
	listint_t *zzz = NULL;
	unsigned int qqq = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(aaa);
		return (1);
	}

	while (qqq < index - 1)
	{
		if (!aaa || !(aaa->next))
		{
			return (-1);
		}
		aaa = aaa->next;
		qqq++;
	}


	zzz = aaa->next;
	aaa->next = zzz->next;
	free(zzz);

	return (1);
}
