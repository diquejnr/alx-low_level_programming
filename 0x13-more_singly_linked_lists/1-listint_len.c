#include <stddef.h>
#include "lists.h"
/**
 * listint_len - the elements in link list
 * @h: input elements
 *
 * Return: count
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
