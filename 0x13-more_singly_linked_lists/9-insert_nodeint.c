#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked-list.
 * @head: The head of the singly linked list.
 * @n: Value of the node to be added
 *
 * Description: functions as described above.
 * Return: The address of the new element & NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_top;

	if (head == NULL)
		return (NULL);

	new_top = malloc(sizeof(listint_t));
	if (new_top == NULL)
		return (NULL);

	new_top->n = n;
	new_top->next = *head;

	*head = new_top;

	return (new_top);
}

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
	listint_t *new_node;
	listint_t *temp;
	unsigned int len;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	temp = *head;
	len = 0;

	if (idx == 0)
	{
		new_node = add_nodeint(head, n);
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
	return (NULL)
}
