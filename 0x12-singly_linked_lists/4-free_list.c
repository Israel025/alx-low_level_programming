#include "lists.h"
#include <stdio.h>

/**
 * free_list - Frees a linkedlist.
 * @head: The head of the list.
 *
 * Description: functions as described above.
 * Return: void, nothing is returned.
 */
void free_list(list_t *head);
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
