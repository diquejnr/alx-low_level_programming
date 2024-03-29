#include <stdio.h>
#include "main.h"

/**
 * flip_bits - count all the no.to change
 * @n: 1st no.
 * @m: 2nd no.
 * in line
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
