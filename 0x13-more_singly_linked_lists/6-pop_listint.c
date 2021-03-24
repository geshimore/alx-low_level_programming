#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head s data (n).
 * @head: first element of the list
 * Return: no return
 */

int pop_listint(listint_t **head)

{

	struct listint_s *temp = NULL;

	int i;

	if (*head == NULL)

		return (0);

	temp = *head;

	i = temp->n;

	*head = temp->next;

	free(temp);

	return (i);

}
