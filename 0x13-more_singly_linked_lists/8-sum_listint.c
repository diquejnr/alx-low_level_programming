#include "lists.h"

/**
 * sum_listint - sum of all data in link list
 * @head: 1st node to be return
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
