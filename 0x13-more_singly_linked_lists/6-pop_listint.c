#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Deletes the head of a linkedlist.
 * @head: The head of the list.
 *
 * Description: functions as described above.
 * Return: The head head node's data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_n;

	if (*head == NULL)
		return (0);

	temp = *head;
	head_n = (temp)->n;
	*head = (temp)->next;
	free(temp);

	return (head_n);
}
