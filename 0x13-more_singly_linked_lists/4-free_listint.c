#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees a linkedlist.
 * @head: The head of the list.
 *
 * Description: functions as described above.
 * Return: void, nothing is returned.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
