#include "main.h"
#include <unistd.h>
/**
 * _putchar - write to c stdout
 * @c: char to print
 *
 * Return: success 1.
 * On error, -1 is return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
