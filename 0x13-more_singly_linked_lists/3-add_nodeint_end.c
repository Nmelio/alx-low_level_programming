#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a linked list
 *
 * @head: pointer to the first element in the list
 *
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fun;
	listint_t *run = *head;

	fun = malloc(sizeof(listint_t));
	if (!fun)
	{
		return (NULL);
	}

	fun->n = n;
	fun->next = NULL;

	if (*head == NULL)
	{
		*head = fun;
		return (fun);
	}

	while (run->next)
	{
		run = run->next;
	}

	run->next = fun;

	return (fun);
}
