#include <stdlib.h>
#include "lists.h"
/**
 * list_len - print the element of linked list
 * @h: pointer to list
 *
 * Return: no. of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t n = 0

		while (h)
		{
			n++;
			h = h->next;
		}
	return (n);
}
