#include "main.h"

/**
 * print_diagonal - draw a digonal line on the terminal
 * @n: the number of times to print the diagonal
 * Return: 0
 */

void print_diagonal(int n)
{
	int x, y;

	if (x <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
		_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
