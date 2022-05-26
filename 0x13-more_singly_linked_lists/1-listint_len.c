#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Counts the number of elements in a a linked-list.
 * @h: A singly linked list.
 *
 * Description: functions as described above.
 * Return: The total number of elements in the linked-list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count;

	node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
