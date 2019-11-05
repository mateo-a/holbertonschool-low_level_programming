#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a
 *                   listint_t list
 * @head: head of the list
 * @n: integer number in the node
 * Return: the number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
