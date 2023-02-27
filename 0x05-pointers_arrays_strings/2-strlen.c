#include "main.h"
/**
 * _strlen - returns the lengh of the string
 * @s: string
 * Return: lengh "Success"
*/
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
