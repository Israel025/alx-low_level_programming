#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the values of each node of a linkedlist.
 * @h: A singly linked list.
 *
 * Description: functions as described above.
 * Return: The total number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
