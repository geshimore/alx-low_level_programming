#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: first element of the list
 * Return: the sum of all data.
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = head->n + sum;
		head = head->next;
	}
	return (sum);
}
