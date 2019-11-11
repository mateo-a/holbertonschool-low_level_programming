#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: head
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count;
	listptr_t *ptr, *head2;
	listint_t *temp, *to;

	count = 0;
	head2 = NULL;
	temp = *h;
	while (temp != NULL)
	{
		ptr = head2;
		while (ptr != NULL)
		{
			if (ptr->ptr == temp)
			{
				free_listrange(h, to);
				free(to);
				free_listptr(head2);
				return (count);
			}
			ptr = ptr->next;
		}
		add_nodeptr(&head2, temp);
		to = temp;
		temp = temp->next;
		count++;
	}
	free_listrange(h, to);
	free(to);
	free_listptr(head2);
	return (count);
}

/**
 * free_listrange - frees a list
 * @h: head
 * @stop: stop free
 * Return: Void
 */

void free_listrange(listint_t **h, listint_t *stop)
{
	listint_t *temp;
	listint_t *temp2;

	temp2 = *h;
	while (temp2 != stop)
	{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
	}
	*h = NULL;
}



/**
 * free_listint2 - frees a list
 * @head: head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	temp2 = *head;
	while (temp2 != NULL && head != NULL)
	{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
	}
	*head = NULL;
}
