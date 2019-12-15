#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	for (; h != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
