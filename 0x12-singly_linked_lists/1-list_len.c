#include "lists.h"
#include <stdio.h>

/**
 * list_len - Counts the number of elements in a linkedlist.
 * @h: A singly linked list.
 *
 * Description: functions as described above.
 * Return: The total number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
