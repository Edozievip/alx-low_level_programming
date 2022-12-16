#include "main.h"

/**
 * _isdigit - checks for a digit number (0 - 9)
 * @c: the number to be checked
 * Return: 1 if number is digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}
