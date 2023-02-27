#include "main.h"
/**
 * print_rev - print a string in reserse follow by new line
 * @s: string
 * return: 0
*/
void print_rev(char *s)
{
	int longi = 0;
	int a;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (a = longi; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
