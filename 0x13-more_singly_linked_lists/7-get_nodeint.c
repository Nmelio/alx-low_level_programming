#include "lists.h"

/**
 * get_nodeint_at_index - returns node at certain index in a linked list
 *
 * @head: first node in the linked list
 *
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int girl = 0;
	listint_t *her = head;

	while (her && girl < index)
	{
		her = her->next;
		girl++;
	}

	return (her ? her : NULL);
}
