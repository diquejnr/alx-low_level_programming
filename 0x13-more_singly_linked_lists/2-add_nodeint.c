#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * add_nodeint - add new node at the beginning
 * @head: point to the 1st node
 * @n: insert data into the node
 *
 * Return: pointer to new line else NULL if fails.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
