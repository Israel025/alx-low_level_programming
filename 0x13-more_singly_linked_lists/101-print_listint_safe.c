#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Printa a linked list safely.
 * @head: The head of the singly linked list.
 *
 * Description: functions as described above.
 * Return: The number of nodes in the linked-list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;

		printf("[%p] %d\n", (void *)head, head->n);

		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
