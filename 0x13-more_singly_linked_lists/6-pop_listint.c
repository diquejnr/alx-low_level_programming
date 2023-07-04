#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete head node of the link list
 * @head: node to be deleted
 *
 * Return: link list if empty 0
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	int data = (*head)->n;
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
