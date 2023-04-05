#include "lists.h"
/**
 * listint_len - the number of elements in a linked listint_t list.
 *
 * @t: head pointer
 * describtion: pointer points and returns null
 * Return: the number of elements
 */

size_t listint_len(const listint_t *t)
{
	size_t count = 0;

	while (t != NULL)
	{
	t = t->next;
		count++;
	}
	return (count);
}
