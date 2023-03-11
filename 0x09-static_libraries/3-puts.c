#include <stdio.h>
#include <string.h>

void _puts(char *str);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}

void _puts(char *str)
{
	puts(str);
}
