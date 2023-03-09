#include "main.h"
/**
 * is_palindrome - function determine if a string
 * is a palindrome
 * @s: string reverse
 * @i: input
 * @len: Lengh of string
 *
 * Return: 1 if it is else return 0
 */
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

int is_palindome(char *s);
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns lengh of a string
 * @s: string to calculate the lengh
 *
 * Return: lengh of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursive for palindrome
 * @s: string to check
 * @i: itelator
 * @len: lengh of a string
 *
 * Return: 1 if palindome else 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(d, i, len - 1));
}
