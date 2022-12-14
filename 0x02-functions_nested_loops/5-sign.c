#include "main.h"

/**
 * print_sign(int n) - print 1, 0 or -1 and print the sign
 * Return: 1 for positive, 0 for zero or -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
