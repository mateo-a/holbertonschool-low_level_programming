#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 *                dlistint_t list
 * @h: pointer to head
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	for (; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
