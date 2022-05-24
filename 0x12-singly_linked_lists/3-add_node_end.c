#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - Adds new node at the end of a linkedlist.
 * @head: The head of the list.
 * @str: The sring to be added.
 *
 * Description: functions as described above.
 * Return: Returns the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, str_len = 0;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str_len++;

	new->len = str_len;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
