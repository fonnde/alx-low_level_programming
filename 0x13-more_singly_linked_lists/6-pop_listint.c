#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the top node
 * @head: a double pointer
 * describtion: return empty if condition not fulfilled
 *Return: blank
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
	return (0);

	start = *head;
	*head = start->next;
	start->n = n;

	free(start);
	return (n);
}

