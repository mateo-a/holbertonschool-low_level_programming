#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a
 *                           listint_t linked list
 *
 * @head: head of the node
 * @index: index of the node that should be deleted
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int i = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index - 1)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		node = temp;
		node = node->next;
		temp->next = node->next;
		free(node);
	}
	return (1);
}
