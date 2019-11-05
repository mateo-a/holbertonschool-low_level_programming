#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked
 *               listint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	for (; h != NULL; cont++)
	{
		h = h->next;
	}
	return (cont);
}
