#include <stdio.h>
#include "lists.h"

/**
 * free_listp - Frees a linkedlist (sets head to NULL).
 * @head: The head of the list.
 *
 * Description: functions as described above.
 * Return: void, nothing is returned.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe -frees a linked list safely.
 * @h: The head of the singly linked list.
 *
 * Description: functions as described above.
 * Return: The number of nodes in the linked-list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
