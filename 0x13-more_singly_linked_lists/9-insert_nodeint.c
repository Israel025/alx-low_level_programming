#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given position of linked-list.
 * @head: The head of the singly linked list.
 * @idx: The index to be modified
 * @n: Value of the node to be added
 *
 * Description: functions as described above.
 * Return: The address of the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int len;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	for (len = 0; len < (idx - 1); len++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);;
}
