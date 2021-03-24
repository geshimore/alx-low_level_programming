#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked
 * listint_t list.
 * @h: first element of the list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)

{

	int i;

	i = 0;

	while (h != NULL)

	{

		i++;

		h = h->next;

	}

	return (i);

}
