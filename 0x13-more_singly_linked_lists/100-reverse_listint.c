#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: The head of the singly linked list.
 *
 * Description: functions as described above.
 * Return: The pointer to the first node of the linked-list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *forward;

	if (*head == NULL)
		return (NULL);

	temp = *head;
	forward = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = forward;
		forward = *head;
		*head = temp;
	}

	*head = forward;
	return (*head);
}
