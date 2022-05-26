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
	unsigned int len = 0;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *head;

	if (temp == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		while ((temp != NULL) && (len < (idx - 1)))
		{
			temp = temp->next;
			len++;
		}

		new_node->n = n;
		new_node->next = temp->next;
		temp->next = new_node;

		if (new_node)
			return (new_node);
		else
			return (NULL);
	}
	return (NULL);
}
