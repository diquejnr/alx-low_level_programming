#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: character to print
 *
 * Return: Success 1
 * On error, -1 is return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
