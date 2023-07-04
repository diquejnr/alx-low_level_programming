#include "lists.h"

/**
 * get_nodeint_at_index - return the node in a certain index
 * @head: 1st node in link list
 * @index: index of node to be return
 *
 * Return: point to the node seaching for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
