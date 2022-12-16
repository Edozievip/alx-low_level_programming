#include "main.h"

/**
 * print_most_numbers - print 0 to 9
 * Description: print all except 2 and 9
 *Return: numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
