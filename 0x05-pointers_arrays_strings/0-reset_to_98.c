#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the va
 * Return: Always 0
 */

void reset_to_98(int *n);
{
	int n;
	int m;

	n = 402;
	*m = &n;

	_putchar("%d\n", n);
	*m = 98;
	_putchar("%d\n", n);
	return (0);
}
