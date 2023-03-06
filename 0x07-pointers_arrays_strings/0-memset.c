#include "main.h"
/**
 * *_memset - fill a block of memory with a specific value
 * @b: input value
 * @s: starting address of memory
 * @n: number of bytes to be change
 *
 * Return: s
 */
char *_memset(char *s, char *b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
