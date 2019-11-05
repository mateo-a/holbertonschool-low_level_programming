#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 *
 * @head: head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	temp = *head;
	if (temp == NULL)
		return (NULL);
	while (temp->next != NULL)
	{
		temp2 = temp->next;
		temp->next = temp2->next;
		temp2->next = *head;
		*head = temp2;
	}
	return (*head);
}
