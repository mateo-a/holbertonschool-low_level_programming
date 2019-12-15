#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a
 *                            given position
 * @h: head of the list
 * @idx: index
 * @n: value to insert
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx,
				   int n)
{
	unsigned int i;
	dlistint_t *new, *tmp;

	if (!h || (idx > 0 && *h == NULL))
		return (NULL);

	i = 0;
	tmp = *h;

	if (idx > 0)
	{
		while (i < (idx - 1) && (tmp->next) != NULL)
		{
			tmp = tmp->next;
			++i;
		}
		if (i < (idx - 1))
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		if (tmp)
			tmp->prev = new;
		*h = new;
		return (new);
	}
	new->prev = tmp;
	if (tmp->next)
		(tmp->next)->prev = new;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
