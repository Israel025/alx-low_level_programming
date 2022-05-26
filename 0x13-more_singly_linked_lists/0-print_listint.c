#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the values of each node of a linkedlist.
 * @h: A singly linked list.
 *
 * Description: functions as described above.
 * Return: The total number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count;

	node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("0\n");
		else
			printf("%d\n", h->n);

		h = h->next;
		node_count++;
	}

	return (node_count);
}
