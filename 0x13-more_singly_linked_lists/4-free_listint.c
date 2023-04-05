#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * describtion: frees lists
 *
 *
 * @head: the head of  list
 * Return: NULL if failed
 */

void free_listint(listint_t *head)
{
	listint_t *next;
	while (head != NULL)
	{
	next = head->next;
	head = next;
	free(head);
	}
}
