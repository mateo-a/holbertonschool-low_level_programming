#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: head
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	listptr_t *ptr, *head2;

	count = 0;
	head2 = NULL;
	while (head != NULL)
	{
		ptr = head2;
		while (ptr != NULL)
		{
			if (ptr->ptr == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listptr(head2);
				return (count);
			}
			ptr = ptr->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		add_nodeptr(&head2, head);
		head = head->next;
		count++;
	}
	free_listptr(head2);
	return (count);
}

/**
 * add_nodeptr - function that adds new node
 * @head: head
 * @pointer: pointer value to add
 * Return: pointer
 */

listptr_t *add_nodeptr(listptr_t **head, const listint_t *pointer)
{
	listptr_t *new_node;

	new_node = malloc(sizeof(listptr_t));
	if (new_node == NULL)
	{
		free_listptr(*head);
		exit(98);
	}
	new_node->ptr = (void *)pointer;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * free_listptr - frees a linked list pointer
 * @head: head
 *
 * Return: void
 */

void free_listptr(listptr_t *head)
{
	listptr_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
