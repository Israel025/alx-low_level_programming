#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked-list.
 * @head: The head of the singly linked list.
 * @n: Value of the node to be added
 *
 * Description: functions as described above.
 * Return: The address of the new element & NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *temp;

	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_end;

	return (new_end);
}
