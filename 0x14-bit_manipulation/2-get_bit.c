#include <stdio.h>
#include "main.h"

/**
 * get_bit - return all the value of bit
 * @n: no. to search within
 * @index: index
 *
 * Return: all bit values
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
