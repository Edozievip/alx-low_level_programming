#include <unistd.h>

/**
 * _putchar - writes the character c to standout
 * @c: the character to print
 * Return: on success 0
 * on error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(0, &c, 1));
}
