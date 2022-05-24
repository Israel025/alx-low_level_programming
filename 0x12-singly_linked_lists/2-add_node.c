#include "lists.h"
#include <stdio.h>

/**
 * add_node - Adds new node at the beginning of a linkedlist.
 * @head: The head of the list.
 * @str: The sring to be added.
 *
 * Description: functions as described above.
 * Return: Returns the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, str_len = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str_len++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
