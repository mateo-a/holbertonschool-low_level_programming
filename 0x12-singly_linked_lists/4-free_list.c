#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: haed of list
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
