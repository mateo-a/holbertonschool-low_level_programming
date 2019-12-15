#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list
 * @head: head of the list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
