#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a
 * given position of a linked-list.
 * @head: The head of the singly linked list.
 * @index: The index to be deleted.
 *
 * Description: functions as described above.
 * Return: 1 and -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *hold;
	unsigned int node;

	hold = *head;

	if (hold == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hold);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (hold->next == NULL)
			return (-1);

		hold = hold->next;
	}

	temp = hold->next;
	hold->next = temp->next;
	free(temp);

	return (1);
}
