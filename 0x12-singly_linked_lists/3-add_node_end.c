#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of linked list
 * @str: string of name
 * Return: the address of the new element or Null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *temp;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->str = _strdup(str);
	p->len = _strlen(str);
	p->next = NULL;
	if (*head == NULL)
		*head = p;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = p;
	}
	return (p);
}

/**
 * _strlen - returns length of string
 * @s: character of string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}

/**
 * _strdup - function that returns a pointer to
 *           a newly allocated space in memory,
 *           which contains a copy of the string
 *           given as a parameter.
 *
 * @str: char
 * Return: NULL if str is NULL or if insufficient memory was available.
 *         On success returns a pointer to the duplicated string.
 */
char *_strdup(const char *str)
{
	char *copy_string;
	unsigned int i, j = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	copy_string = malloc(i + 1 * sizeof(char));
	if (copy_string == NULL)
		return (NULL);
	while (j < i)
	{
		copy_string[j] = str[j];
		j++;
	}
	return (copy_string);
}
