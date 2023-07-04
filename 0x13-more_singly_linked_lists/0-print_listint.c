#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all element in link list
 * @h: link list type to print
 *
 * Return: no. of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
