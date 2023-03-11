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
	_puts("At the end of the day, my goal was to be the best programmer");
	return (0);
}

void _puts(char *str)
{
	puts(str);
}
