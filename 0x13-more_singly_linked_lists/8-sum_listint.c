#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Sums all of the data(n) of a linked-list.
 * @head: The head of the singly linked-list.
 *
 * Description: functions as described above.
 * Return: The sum of all data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
