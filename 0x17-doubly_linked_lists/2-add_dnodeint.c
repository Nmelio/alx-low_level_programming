#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to first node
 * @n: int for new node
 *
 * Return: address to new node
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *infant;

	infant = malloc(sizeof(dlistint_t));
	if (infant == NULL)
	{
		return (NULL);
	}

	infant->n = n;
	infant->prev = NULL;
	infant->next = *head;
	if (*head)
	{
		(*head)->prev = infant;
	}
	*head = infant;

	return (infant);
}
