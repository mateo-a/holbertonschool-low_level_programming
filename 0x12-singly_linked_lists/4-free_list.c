#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: haed of list
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
