#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 *
 * @head: head of the list
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}