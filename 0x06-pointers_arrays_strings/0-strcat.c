#include "main.h"
/**
 * *_strcat - function that concatenate two strings
 * @dest: input value
 * @src: outpu value
 * Return: dest
*/

char *_strcat(char *dest, char *src);
{
	char *dest_ptr = dest;
	const char *src_ptr = src;

	while (*dest_ptr)
	{
		dest_ptr++;
	}
	while (*src_ptr)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	*dest_ptr = '\0';

	return (dest);
}
