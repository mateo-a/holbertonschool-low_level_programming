#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: head of the list
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	node = *head;
	while (head != NULL && node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
