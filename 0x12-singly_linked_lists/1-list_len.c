#include "lists.h"

/**
 * list_len - Calculate number of elements in a linked list_t list
 * @h: singly linked list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
