#include "lists.h"

/**
 * print_listint - prints elements in linked list
 * @f: linked list of type listint_t to print
 * return: number of nodes
 */
size_t print_listint(const listint_t *f)
{	size_t num = 0;

	while (f)
	{	printf("%d\n", f->n);
		num++;
		f = f->next;
	}
	return (num);
}
