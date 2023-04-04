#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts number of unique nodes
 *
 * in a looped listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *aa, *h;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	aa = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (aa == h)
		{
			aa = head;
			while (aa != h)
			{
				n++;
				aa = aa->next;
				h = h->next;
			}

			aa = aa->next;
			while (aa != h)
			{
				n++;
				aa = aa->next;
			}

			return (n);
		}

		aa = aa->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints listint_t list safely.
 *
 * @head: A pointer to head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
