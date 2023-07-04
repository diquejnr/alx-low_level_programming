#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that free linst
 * @head: free list
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
