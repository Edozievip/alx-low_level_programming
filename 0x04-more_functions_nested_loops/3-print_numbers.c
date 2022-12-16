#include "main.h"

/**
 * print_numbers - print numbers (0-9)
 * Return: the numbers from 0 to 9
 */

void print_numbers(void)
{
	int (v);
	for (v = 0; v <= 9; v++)
	{
		_putchar(v + '0');
	}
		_putchar('\n');
}
