#include "main.h"
/**
 * wildcmp - compare two or more strings
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: 0
 */
int wildcmp(char *s1, *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcpm(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcpm(s1 + 1, s2) || wildcpm(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
