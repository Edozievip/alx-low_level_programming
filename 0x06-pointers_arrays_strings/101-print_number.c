#include "main.h"

/**
 * print_number - print integer numbers
 * @n: the number to print
 * Return: Always 0
 */

void print_numbe(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');

	return (0);
}
