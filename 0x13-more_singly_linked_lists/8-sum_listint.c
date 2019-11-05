#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n) of a
 *               listint_t linked list
 *
 * @head: the head of the node
 *
 * Return: the sum of all the data (n) of a list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int a = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		a += temp->n;
		temp = temp->next;
	}
	return (a);
}
