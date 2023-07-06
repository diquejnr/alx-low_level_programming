#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set the value to 0
 * @n: point to the number
 * @index: bit to clear
 *
 * Return: 1 as success and -1 as failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
