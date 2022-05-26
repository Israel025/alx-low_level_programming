#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node  of a linked-list.
 * @head: The head of the singly linked-list.
 * @index: The index of the node to be returned.
 *
 * Description: functions as described above.
 * Return: The node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int len;

	temp = head;
	len = 0;

	while ((temp != NULL) && (len < index))
	{
		temp = temp->next;
		len++;
	}

	if (temp)
		return (temp);
	else
		return (NULL);
}
