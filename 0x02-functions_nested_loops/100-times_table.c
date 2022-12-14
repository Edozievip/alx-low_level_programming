#include "main.h"

/**
 * print_times_table - print n times table starting with zero
 * @n: the number to be checked
 * Return: Always 0
 */

void print_times_table(int n)
{
	int num1, mult1, prod1;

	if (n >= 0 && n <= 15)
	{
	for (num1 = 0; num1 <= n; num1++)
	{
	_putchar('0');
	for (mult1 = 1; mult1 <= n; mult1++)
	{
	_putchar(',');
	_putchar(' ');
	prod1 = num1 * mult1;
	if (prod1 <= 99)
	_putchar(' ');
	if (prod1 <= 9)
	_putchar(' ');
	if (prod1 >= 100)
	{
	_putchar((prod1 / 100) + '0');
	_putchar(((prod1 / 10)) % 10 + '0');
	}
	else if (prod1 <= 99 && prod1 >= 10)
	{
	_putchar((prod1 / 10) + '0');
	}
	_putchar((prod1 % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
