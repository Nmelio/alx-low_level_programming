#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at the end of a dlistint_t list
 *
 * @head: address of first node
 * @n: element for new node
 *
 * Return: address to new element
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *infant, *temp = *head;

	infant = malloc(sizeof(dlistint_t));
	if (infant == NULL)
	{
		return (NULL);
	}
	infant->n = n;
	infant->next = NULL;

	if (temp)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		infant->prev = temp;
		temp->next = infant;
	}
	else
	{
		*head = infant;
		infant->prev = NULL;
	}

	return (infant);
}
