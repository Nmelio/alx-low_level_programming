#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of linked list
 *
 * @head: pointer to the first node in the list
 *
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *good;

	good = malloc(sizeof(listint_t));
	if (!good)
	{
		return (NULL);
	}

	good->n = n;
	good->next = *head;
	*head = good;

	return (good);
}
