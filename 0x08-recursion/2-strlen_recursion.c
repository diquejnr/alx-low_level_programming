#include "main.h"
/**
 * _strlen_recursion - provides lengh of strlen
 * @s: run man strlen
 *
 * Return: string lengh
 */
int _strlen_recursion(char *s)
{
	int longit = 0
		if (*s)
		{
			longit++;
			longi += _strlen_recursion(s + 1);
		}
	return (longit);
}
