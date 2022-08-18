#include "list.h"

/**
 * add_node - adds a new node at the beginning of a `list_t` list
 * @head: head of the list
 * @str: string to be added to the list
 *
 * Return: the address of new element or `NULL` if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
