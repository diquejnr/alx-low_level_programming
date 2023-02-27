#include "main.h"
/**
 * puts2 - function print only one out of two
 * starting with the first one
 * @str: input
 * Return: print
*/
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (a = 0; a <= t; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
