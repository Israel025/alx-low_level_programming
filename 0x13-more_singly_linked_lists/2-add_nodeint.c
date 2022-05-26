#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked-list.
 * @head: The head of the singly linked list.
 * @n: Value of the node to be added
 *
 * Description: functions as described above.
 * Return: The address of the new element & NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_top;

	if (head == NULL)
		return (NULL);

	new_top = malloc(sizeof(listint_t));
	if (new_top == NULL)
		return (NULL);

	new_top->n = n;
	new_top->next = *head;

	*head = new_top;

	return (new_top);
}
