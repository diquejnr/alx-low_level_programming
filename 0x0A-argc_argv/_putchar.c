#include <stdio.h>
#include "main.h"

/**
 * _putchar - write the charater c
 * @c: character to print
 *
 * Return: Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
