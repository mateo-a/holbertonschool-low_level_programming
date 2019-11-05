#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 *                           position
 *
 * @head: the head of the node
 * @index: index of the list
 * @n: data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *newNode, *temp;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	i = 0;
	if (*head == NULL && index > 0)
	{
		free(newNode);
		return (NULL);
	}
	if (index == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		if (temp == NULL && index - i > 0)
		{
			free(newNode);
			return (NULL);
		}
		i++;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
