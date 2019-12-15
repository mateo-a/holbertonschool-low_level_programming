#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index index of
 *                            a dlistint_t linked list
 * @head: double pointer to head of list
 * @index: index of the node that sould be deleted
 * Return: 1 if succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *tmp2;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}

	while (count < (index - 1))
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		count++;
	}
	tmp2 = tmp->next->next;
	if (tmp->next->next != NULL)
		tmp->next->next->prev = tmp;
	free(tmp->next);
	tmp->next = tmp2;
	return (1);
}
