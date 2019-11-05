#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 *                        linked list
 *
 * @head: head of the node
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a list, if the node does not exist return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int a;

	temp = head;
	for (a = 0; a < index && temp != NULL; a++)
		temp = temp->next;
	if (a != index)
		return (NULL);
	return (temp);
}
