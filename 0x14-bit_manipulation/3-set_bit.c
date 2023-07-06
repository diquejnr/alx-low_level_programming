#include <stdio.h>
#include "main.h"

/**
 * set_bit - set a bit
 * @n: point to the no.
 * @index: index
 *
 * Return: 1 as success and -1 as failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
