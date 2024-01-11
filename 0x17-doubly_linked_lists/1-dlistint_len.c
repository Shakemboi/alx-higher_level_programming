#include "lists.h"


/**
 * dlistint_len - func that counts the number of elements
 * in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements of a dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}