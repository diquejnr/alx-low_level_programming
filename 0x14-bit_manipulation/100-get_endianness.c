#include <stdio.h>
#include "main.h"

/**
 * get_endianness - check the machine size
 * Return: 0 as big and 1 as little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
